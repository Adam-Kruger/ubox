#!/bin/bash

while [ 1 ]
do
    echo 1 > /sys/class/gpio/gpio2/value
    sleep 3
    echo 0 > /sys/class/gpio/gpio2/value
    sleep 3
done
