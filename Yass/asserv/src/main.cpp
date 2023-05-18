#include <mbed.h>
#include <robot.hpp>

int main()
{
    ROBOT caviste(PA_12, PB_0, PB_7, PB_6, PB_1, PF_0);
    
    caviste.init();
    caviste.setSpeed(100);
    int compteur=0;


    while(true)
    {
        
        

    }
}
