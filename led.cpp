#include<iostream>
#include<wiringPi.h>

using namespace std;

int main()
{
    wiringPiSetup();
    pinMode(2, OUTPUT);

    for(;;)
    {
        digitalWrite(2, HIGH);
        delay(1000);
        digitalWrite(2, LOW);
        delay(1000);
    }
    return 0;
}
