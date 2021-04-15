#include<iostream>
#include<wiringPi.h>

using namespace std;

int main()
{
    wiringPiSetupGpio();
    pinMode(2, INPUT);

    for(;;)
    {
        if(digitalRead (2)==LOW)
        {
            cout<<"Przycisk nacisniety\n";
        }
        else
        {
            cout<<"Przycisk nie nacisniety\n";
        }
    }
    return 0;
}