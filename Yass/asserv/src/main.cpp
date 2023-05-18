#include <mbed.h>
#include <hcsr04.h>
#include <robot.hpp>

int main()
{
    AnalogIn LDR(PA_0);

    DigitalOut ctrl(PA_4); 
    DigitalIn L1(PA_3);   
    DigitalIn L2(PA_2);  
    DigitalIn L3(PA_1);

    HCSR04 distRight(PF_1, PA_8);
    HCSR04 distLeft(PA_11, PB_5);

    ROBOT leana(PB_0, PA_12, PF_0, PB_1, PB_6, PB_7);
    leana.init();
    leana.setSpeed(100);
    int compteur=0;


    while (true) //
    {
        printf("ldr voltage : %d \n", static_cast<int>(LDR.read()*500));
        leana.forward();
        printf("right: %ld", distRight.distance());
        printf("left: %ld", distLeft.distance());


 
        if(distLeft.distance() < 35 && distRight.distance() < 35)
        {
            if(distLeft.distance() < distRight.distance())
            {
                leana.stop();
                ThisThread::sleep_for(5ms);
                leana.turnRight();
                compteur++;
            }
             if(distLeft.distance() > distRight.distance())
            {   
                leana.stop();
                ThisThread::sleep_for(5ms);
                leana.turnLeft();
                compteur++;
            }
            if(distLeft.distance() == distRight.distance())
            {
                leana.stop();
                ThisThread::sleep_for(5ms);
                leana.turnLeft();
                ThisThread::sleep_for(5ms);
                compteur++;
            }

            if(compteur>=3)
            {
            leana.stop();
            leana.backward();
        
            ThisThread::sleep_for(450ms);
            leana.turnRight();
            ThisThread::sleep_for(450ms);

            compteur=0;
            }
            
        }

        else if(distRight.distance()<35)
        {
            leana.stop();
            ThisThread::sleep_for(15ms);
            leana.turnLeft();
        }

        else if(distLeft.distance()<35)
        {
            leana.stop();
            ThisThread::sleep_for(15ms);
            leana.turnRight();
        }


        if(compteur>=3)
        {
            leana.stop();
            leana.backward();
        
            ThisThread::sleep_for(250ms);
            leana.turnRight();
            ThisThread::sleep_for(250ms);

            compteur=0;
        }
        

    }
}
