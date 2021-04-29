# Raspberry

## led.sh

### Prerequires:

### How to run

## button.sh
### Prerequires:
  1. Connect Button between GND and GPIO2 on Raspberry Pi. (To check pin's names, use command: pinout)
  2. button.sh file copierd from repository into Button_1 directory. If you don't have "led_1.sh" file copy it from repository usin comand: git clone https://github.com/Adam-Kruger/ubox Button_1
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
