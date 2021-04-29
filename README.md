# Raspberry

## led.sh

### Prerequires:
  1. Connect Negativ side of the LED through resistor (you can choose from 220 Ohm up to around 1k Ohh) to the GND on Raspberry Pi
  2. Connect Positive side of the LED to GPIO2 on Raspberry Pi 
  3. led.sh file copied from repository into Button_1 directory. If you don't have "led.sh" file, copy it from repository using command: git clone https://github.com/Adam-Kruger/ubox Button_1
  4. Passwordless ssh connection between Raspberry Pi and Virtual Machine
  5. Created folder "programs" on raspberry pi home/pi/programs. To create it make sure you are in /pi/ folder ande use command: mkdir programs
### How to run:
  1. Go to Button_1 catalog using: cd Button_1
  2. Send led.sh to raspberry Pi using command: scp led.sh raspberry:/programs
  3. Run with command: ssh raspberry programs/led.sh
  4. To stop program use keyboard shortcut Ctrl+C
  
  
## button.sh

### Prerequires:
  1. Connect Button between GND and GPIO2 on Raspberry Pi. (To check pin's names, use command: pinout)
  2. button.sh file copied from repository into Button_1 directory. If you don't have "button.sh" file copy it from repository usin comand: git clone https://github.com/Adam-Kruger/ubox Button_1
  3. Passwordless ssh connection between Raspberry Pi and Virtual Machine
  4. Created folder "programs" on raspberry pi home/pi/programs. To create it make sure you are in /pi/ folder ande use command: mkdir programs
### How to run:
  1. Go to Button_1 catalog using: cd Button_1
  2. Send button.sh to raspberry Pi using command: scp button.sh raspberry:/programs
  3. Run with command: ssh raspberry programs/button.sh
  4. To stop program use keyboard shortcut Ctrl+C

## ledplus.cpp
### Prerequires:
### How to compile:
### How to run:

## buttonplus.cpp
### Prerequires:
### How to compile:
### How to run:
