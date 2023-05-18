#include <mbed.h>
#include "../lib/BNO055.h"

int main()
{
  //setup
  DigitalInOut SDA(D1);
  SDA.mode(PullUp);

  DigitalInOut SCL(D0);
  SCL.mode(PullUp);

  BNO055 gyro(D1, D2) ;
  BNO055 reset();
//loop    
printf("yesss");
      /*if(!gyro.check())
      {
        printf("yesss");
      }
      else
      {
        printf("nope");
        return 1 ;
      }
      */

} 