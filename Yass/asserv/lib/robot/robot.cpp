#include "robot.hpp"
#include <mbed.h>

ROBOT::ROBOT(PinName mot1Plus,PinName mot1Moins,PinName mot2Plus, PinName mot2Moins,PinName mot3Plus,PinName mot3Moins) : mot1P(mot1Plus), mot1M(mot1Moins), mot2P(mot2Plus), mot2M(mot2Moins), mot3P(mot3Plus), mot3M(mot3Moins) {}


void ROBOT::setSpeed(int mot1, int mot2, int mot3)
{
    wheelSpeed = 0.8;
    mot1P.write(wheelSpeed);
    mot1M.write(0);

    mot2P.write(wheelSpeed);
    mot2M.write(0);

    mot3P.write(wheelSpeed);
    mot3M.write(0);
    
}

void ROBOT::move(int x, int y, int t)
{
    
}


void ROBOT::init()
{
    mot1P.period(1.0f / 2000);
    mot1M.period(1.0f / 2000);

    mot2P.period(1.0f / 2000);
    mot2M.period(1.0f / 2000);

    mot3P.period(1.0f / 2000);
    mot3M.period(1.0f / 2000);
    setSpeed(0);
}

void ROBOT::stop()
{
    mot1P.write(0);
    mot1M.write(0);

    mot2P.write(0);
    mot2M.write(0);

    mot3P.write(0);
    mot3M.write(0);
}
