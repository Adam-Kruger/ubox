# Raspberry

## led.sh

### Prerequires:
  1. Connect Negativ side of the LED through resistor (you can choose from 220 Ohm up to around 1k Ohh) to the GND on Raspberry Pi
  2. Connect Positive side of the LED to GPIO2 on Raspberry Pi (To check pin's names, use command: pinout) 
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
  1. Connect Negativ side of the LED through resistor (you can choose from 220 Ohm up to around 1k Ohh) to the GND on Raspberry Pi
  2. Connect Positive side of the LED to GPIO2 on Raspberry Pi (To check pin's names, use command: pinout) 
  3. Installed g++ compiler. If you don't have g++ compiler installed, instal it using command: sudo apt install g++
  4. Installed wiringpi library. If you don't have wiringpi installed you can install it using: sudo apt-get install wiringpi
  5. ledplus.cpp file copied from repository into Button_1 directory. If you don't have "ledplus.cpp" file, copy it from repository using command: git clone https://github.com/Adam-Kruger/ubox Button_1
  6. Passwordless ssh connection between Raspberry Pi and Virtual Machine
  7. Created folder "programs" on raspberry pi home/pi/programs. To create it make sure you are in /pi/ folder ande use command: mkdir programs
### How to compile:
  1. Go to Button_1 catolog using: cd Button_1
  2. Send ledplus.cpp to Raspberry Pi using command: scp ledplus.cpp raspberry:/programs
  3. Connect to Raspberry Pi via ssh using command: ssh raspberry
  4. Go to "programs" folder on Raspberry Pi using command: cd programs
  5. To compile use command: g++ -Wall -o ledplus ledplus.cpp -lwiringPi
### How to run:
  1. Run with command: ssh raspberry programs/ledcpp
  2. To stop program use keyboard shortcut Ctrl+C


## buttonplus.cpp

### Prerequires:
  1. Connect Button between GND and GPIO2 on Raspberry Pi. (To check pin's names, use command: pinout)
  2. Installed g++ compiler. If you don't have g++ compiler installed, instal it using command: sudo apt install g++
  3. Installed wiringpi library. If you don't have wiringpi installed you can install it using: sudo apt-get install wiringpi
  4. buttonplus.cpp file copied from repository into Button_1 directory. If you don't have "buttonplus.cpp" file, copy it from repository using command: git clone https://github.com/Adam-Kruger/ubox Button_1
  5. Passwordless ssh connection between Raspberry Pi and Virtual Machine
  6. Created folder "programs" on raspberry pi home/pi/programs. To create it make sure you are in /pi/ folder ande use command: mkdir programs    
### How to compile:
  1. Go to Button_1 catolog using: cd Button_1
  2. Send buttonplus.cpp to Raspberry Pi using command: scp buttonplus.cpp raspberry:/programs
  3. Connect to Raspberry Pi via ssh using command: ssh raspberry
  4. Go to "programs" folder on Raspberry Pi using command: cd programs
  5. To compile use command: g++ -Wall -o buttonplus buttonplus.cpp -lwiringPi
### How to run:
  1. Run with command: ssh raspberry programs/buttoncpp
  2. To stop program use keyboard shortcut Ctrl+C
