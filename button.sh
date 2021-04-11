#! /bin/bash

echo "in" > sys/class/gpio/gpio2/direction

while [ 1 ]
do
    if [sys/class/gpio/gpio2/value == 1]
    then
        echo "Przycisk nacisniety"
    fi
done    