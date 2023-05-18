#include "robot.hpp"
#include "mbed.h"

ROBOT::ROBOT(PinName mot1Plus,PinName mot1Moins,PinName mot2Plus, PinName mot2Moins,PinName mot3Plus,PinName mot3Moins) : mot1Plus(mot1P), mot1Moins(mot1M), mot2Plus(mot2P), mot2Moins(mot2M), mot3Plus(mot3P), mot3Moins(mot3M) {}


void ROBOT::setSpeed(int mot1, int mot2, int mot3)
{

    
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
