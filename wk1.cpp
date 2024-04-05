// C++ code                            
//
#include <iostream>
using namespace std;


int LEDB = 13;
int LEDG = 12;
int LEDR = 2;


void setup()
{
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 2; i++) {
       digitalWrite(LEDR, HIGH);
       delay(1000); // Wait for 1000 millisecond(s)
       digitalWrite(LEDR, LOW);
       delay(1000); // Wait for 1000 millisecond(s)
  }
  
  for (int i = 0; i < 4; i++) {
       digitalWrite(LEDG, HIGH);
       delay(500); // Wait for 500 millisecond(s)
       digitalWrite(LEDG, LOW);
       delay(500); // Wait for 500 millisecond(s)
  }
  for (int i = 0; i < 6; i++) {
       digitalWrite(LEDB, HIGH);
       delay(500); // Wait for 500 millisecond(s)
       digitalWrite(LEDB, LOW);
       delay(500); // Wait for 500 millisecond(s)
  }
  
}
