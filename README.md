# Larson_Scanner
A simple Larson Scanner based on 74HC595 Shift Register

## Hardware 

An Arduino UNO is used to interface the 74HC595 shift register which sequentially lights up the LEDs connected to output pins QA - QH  

## Circuit Diagram/Schematic

![Circuit Diagram](https://github.com/METACRYPT12/Larson_Scanner/blob/master/images/circuit_tk.png)

![Schematic](https://github.com/METACRYPT12/Larson_Scanner/blob/master/images/schematic.png)

## Software

A user-defined function shiftWrite is used to write to the internal register of shift register sequentially from QA to QH on the rising-edge of clock and then latch it to the output on the falling edge of the clock.

## TinkerCad 
[Link to TinkerCad Sketch](https://www.tinkercad.com/things/1QUEh64eXEC?sharecode=O-J4VrxvqSJAL8Vil9IsFzNm2QI4GNEJhAQSKJvQUVg)
