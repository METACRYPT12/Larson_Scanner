int datapin = 2;
int clkpin = 3;
int latchpin = 4;

byte data = 0;
void setup()
{
  pinMode(datapin, OUTPUT);
  pinMode(clkpin, OUTPUT);  
  pinMode(latchpin, OUTPUT);
}
void loop()
{
  int idx;
  int delayTime = 100;
  
  // step through shift register outputs
  for(idx = 0; idx <= 7; idx++)
  {
    shiftWrite(idx, HIGH);
    delay(delayTime);
    shiftWrite(idx, LOW);
  }
  
  // Reverse steps
  for(idx = 7; idx >= 0; idx--)
  {
    shiftWrite(idx, HIGH);
    delay(delayTime);
    shiftWrite(idx, LOW);
  }
  
}

void shiftWrite(int Pin, boolean State)
{
  // Data representation 0b00000000
  //                       76543210 
  bitWrite(data, Pin, State);
  // Write data to shift register
  shiftOut(datapin, clkpin, MSBFIRST, data);
  // Latch shift register to output on Falling-edge
  digitalWrite(latchpin, HIGH);
  digitalWrite(latchpin, LOW);
}
