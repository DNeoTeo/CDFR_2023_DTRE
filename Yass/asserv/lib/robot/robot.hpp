#ifndef robot_H
#define robot_H
#include "mbed.h"


 
class ROBOT {
    private:
        
        PwmOut mot1P;
        PwmOut mot1M;

        PwmOut mot2P;
        PwmOut mot2M;

        PwmOut mot3P;
        PwmOut mot3M;
        
        float wheelSpeed;
    
    public:
        
        ROBOT(PinName mot1Plus,PinName mot1Moins,PinName mot2Plus, PinName mot2Moins,PinName mot3Plus,PinName mot3Moins);
        void init();
        void setSpeed(int mot1, int mot2, int mot3);
        void move(int x, int y, int t);
        void stop();
    
        
 
};

#endif