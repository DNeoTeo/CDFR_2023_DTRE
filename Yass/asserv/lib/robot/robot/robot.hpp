#ifndef robot_H
#define robot_H
#include "mbed.h"


 
class ROBOT {
    //private:
    public:    
        PwmOut mot1P;
        PwmOut mot1M;

        PwmOut mot2P;
        PwmOut mot2M;

        PwmOut mot3P;
        PwmOut mot3M;
        
        float wheelSpeed;
    
    //public:
        
        ROBOT(PinName mot1Plus,PinName mot1Moins,PinName mot2Plus, PinName mot2Moins,PinName mot3Plus,PinName mot3Moins);
        void init();
        void setSpeed(float mot1, float mot2, float mot3);
        void move(float x, float y, float t);
        void stop();
    
        
 
};

#endif