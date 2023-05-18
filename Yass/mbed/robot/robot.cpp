#include "robot.hpp"
#include <mbed.h>

ROBOT::ROBOT(PinName mot1Plus,PinName mot1Moins,PinName mot2Plus, PinName mot2Moins,PinName mot3Plus,PinName mot3Moins) : mot1P(mot1Plus), mot1M(mot1Moins), mot2P(mot2Plus), mot2M(mot2Moins), mot3P(mot3Plus), mot3M(mot3Moins) {}


void ROBOT::setSpeed(float mot1, float mot2, float mot3)
{
    mot1P.write(0);
    mot1M.write(mot1);

    mot2P.write(mot2);
    mot2M.write(0);

    mot3P.write(0);
    mot3M.write(mot3);
    
}

void ROBOT::move(float x, float y, float t)
{
    
}


void ROBOT::init()
{
    float per = 0.02f;
    mot1P.period(per);
    mot1M.period(per);

    mot2P.period(per);
    mot2M.period(per);

    mot3P.period(per);
    mot3M.period(per);
    setSpeed(0,0,0);
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
