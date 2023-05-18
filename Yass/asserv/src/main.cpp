#include <mbed.h>
#include <robot.hpp>

int main()
{
    ROBOT leana(PB_0, PA_12, PF_0, PB_1, PB_6, PB_7);
    leana.init();
    leana.setSpeed(100);
    int compteur=0;


    while(true)
    {
        
        

    }
}
