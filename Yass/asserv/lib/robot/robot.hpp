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
        int diffspeed = 0.06;
    
    public:
        
        ROBOT(PinName EN_12,PinName A_1,PinName A_2, PinName EN_34,PinName A_3,PinName A_4);
        void init();
        void setSpeed(int speed);
        void move(int x, int y, int t);
        void stop();
    
        
 
};

#endif