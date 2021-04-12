#include <wiringPi.h>
int main (void)
{
  wiringPiSetupGpio() ;
  pinMode (2, OUTPUT) ;
  for (;;)
  {
    digitalWrite (2, HIGH) ; delay (1000) ;
    digitalWrite (2,  LOW) ; delay (1000) ;
  }
  return 0 ;
}
