# Motion Activated Light With Arduino and HC-SR04 Sensor

## Table of contents
1. [Abstract](#abstract)
2. [Requirements](#requirements)
3. [SWOT Analysis](#swot)
4. [4W's and 1H](#4w1h)
5. [Block Diagram](#BlockDiagram)
6. [Output](#output)
7. [Test Plan](#TestPlan)
8. [Components](#components)
9. [Motion Activated Light with Arduino and HC-SR04 Sensor applications](#applications)
***

# Abstract <a name="abstract"></a>
In this project we will build a motion sensor light circuit with an arduino. A motion sensor light circuit is a circuit in which a light turns on when motion is detected.
With a motion sensor integrated with an arduino, we can detect movement and program the arduino to turn a light on for a certain period of time once this motion is detected.


# Requirements <a name="requirements"></a>

  ## High Level Requirements
  |  ID|Description|Status|
  |---|---|---|
  | HLR01 | It shall turn the light on and off. | To be done |
  | HLR02 | It shall sense the motion and register it | To be done |
  | HLR03 | It shall keep a record of number of people visting the room  | Future | 
  | HLR04 |  It shall measure the darkness| Future |
  

  ## Low Level Requirements
  |  ID|Description|Status|
  |---|---|---|
  | LLR01 | Toggle the switch | To be done |
  | LLR02 | Sense the physical motion | To be done |
  | LLR03 | Have a second sensor sensing people leaving the room and turn of the light accordingly | Future|
  
  
  
  # SWOT Analysis <a name="swot"></a>
  
  ## Strengths
  
  * Makes things easier for people.
  * Helps you to automate your light connections.
  * Makes your home a smart home.
  * Helps with utility costs.
  * Better for environment.
  
  ## Weakness
  * It is much expensive than normal light system.
 
 ## Opportunities
 
* We can make this accurate and more sensitive.
 
 ## Threats 
 
* Risk of theft of the light system is higher since they are non-wired.
 
 # 4W's and 1H <a name="4w1h"></a>
  ## Who
  ---
  Personal and Public Sector usages.
  ## What
  ---
  Smart solution to toggle light based on motion.
  ## When
  ---
  When we want to reduce the manual efforts of toggling switches.
  ## Where
  ---
  Offices and also personal spaces like home.
  ## How
  ---
  By sensing the motion.
 
# Block Diagram <a name="BlockDiagram"></a>

![Block Diagram](https://user-images.githubusercontent.com/98808752/155834640-c130b1ff-886f-495c-86cf-68c9844902d8.jpeg)
# Schematic Diagram 
![Schematic Diagram](https://user-images.githubusercontent.com/98808752/155770571-cf41e4af-e31e-4381-b022-72dbf387e680.png)

# Output  <a name="output"></a>

![output](https://user-images.githubusercontent.com/98808752/156934774-77085205-3990-451f-a741-225898ff200d.jpeg)

# Test Plan  <a name="TestPlan"></a>
### High Level Test plan
ID | Requirement | Status
--- | --- | ---
01 | Threshold Distance should be set between 2 cm to 4 cm | :white_check_mark:
02 | Motion Sensor should be able to detect the object | :white_check_mark:
03 | Distance between the sensor and the Object should be calculated | :white_check_mark:
### Low Level Test plan
ID | Requirement | Status
 --- | --- | ---
01.1 | LED should glow when object is within the threshold distance | :white_check_mark:
01.2 | LED should turn off when object is not deteted | :white_check_mark:
02.1 | Microcontroller shall turn on LED | :white_check_mark:
02.2 | Delay should be off 1000ms | :white_check_mark:

# Components <a name="components"></a>
* Adruino Uno : Arduino Uno is a microcontroller board based on the ATmega328P (datasheet). It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a power jack, an ICSP header and a reset button. 

* HC-Sr04 : The HC-SR04 Ultrasonic Distance Sensor is a sensor used for detecting the distance to an object using sonar. It's ideal for any robotics projects your have which require you to avoid objects, by detecting how close they are you can steer away from them.


* Power Relay : A power relay is a device that uses an electromagnet to open or close a circuit when the input (coil) is correctly excited. They provide a high level of isolation between the control signal (coil) and the output (contacts) – typically with a rated impulse voltage of 4 or 6kV.


* LED : An LED bulb produces light by passing the electric current through a semiconducting material—the diode—which then emits photons (light) through the principle of electroluminescence.


* Cables : Electrical cables are used to connect two or more devices, enabling the transfer of electrical signals or power from one device to the other. 

# Application <a name="applications"></a>
* This device can be installed in public places, which can help to decrease the electricity costs significantly.
* Can be used to automatically turn on light when a person enters the room.

