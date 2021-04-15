#!/bin/bash

if [ -e /sys/class/gpio/gpio2 ]
then
    echo "Gpio2 wyeksportowany"
else
    echo "2" > /sys/class/gpio/export
fi

echo "in" > /sys/class/gpio/gpio2/direction

while [ 1 ]
do
    x=$(cat /sys/class/gpio/gpio2/value)

    if [ "$x" = "0" ]
    then
            echo "Przycisk nacisniety"
    else
            echo "Przycisk nienacisniety"
    fi
done  