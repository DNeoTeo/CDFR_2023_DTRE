#include <mbed.h>
#include <robot.hpp>

int main()
{
    ROBOT caviste(PA_12, PB_0, PB_7, PB_6, PB_1, PF_0);
    caviste.init();
    
    while(true)
    {
        caviste.setSpeed(0, 0, 0);
        ThisThread::sleep_for(5s);
        caviste.stop();
        ThisThread::sleep_for(5s);
    }
}
