#include <reg51.h>

sbit M1_IN1 = P2^0;
sbit M1_IN2 = P2^1;

sbit M2_IN1 = P2^2;
sbit M2_IN2 = P2^3;

sbit M3_IN1 = P2^4;
sbit M3_IN2 = P2^5;

sbit M4_IN1 = P2^6;
sbit M4_IN2 = P2^7;

void delay(unsigned int ms)
{
    unsigned int i,j;

    for(i=0;i<ms;i++)
    {
        for(j=0;j<1275;j++);
    }
}

void stop_all()
{
    M1_IN1 = 0;
    M1_IN2 = 0;

    M2_IN1 = 0;
    M2_IN2 = 0;

    M3_IN1 = 0;
    M3_IN2 = 0;

    M4_IN1 = 0;
    M4_IN2 = 0;
}

void move_forward()
{
    M1_IN1 = 1;
    M1_IN2 = 0;

    M2_IN1 = 1;
    M2_IN2 = 0;

    M3_IN1 = 1;
    M3_IN2 = 0;

    M4_IN1 = 1;
    M4_IN2 = 0;
}

void move_backward()
{
    M1_IN1 = 0;
    M1_IN2 = 1;

    M2_IN1 = 0;
    M2_IN2 = 1;

    M3_IN1 = 0;
    M3_IN2 = 1;

    M4_IN1 = 0;
    M4_IN2 = 1;
}

void turn_right()
{
    M1_IN1 = 1;
    M1_IN2 = 0;

    M2_IN1 = 0;
    M2_IN2 = 1;

    M3_IN1 = 1;
    M3_IN2 = 0;

    M4_IN1 = 0;
    M4_IN2 = 1;
}

void turn_left()
{
    M1_IN1 = 0;
    M1_IN2 = 1;

    M2_IN1 = 1;
    M2_IN2 = 0;

    M3_IN1 = 0;
    M3_IN2 = 1;

    M4_IN1 = 1;
    M4_IN2 = 0;
}

void main()
{
    while(1)
    {
        move_forward();
        delay(3000);

        stop_all();
        delay(1000);

        move_backward();
        delay(3000);

        stop_all();
        delay(1000);

        turn_right();
        delay(2000);

        stop_all();
        delay(1000);

        turn_left();
        delay(2000);

        stop_all();
        delay(1000);
    }
}