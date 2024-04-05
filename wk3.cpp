// C++ CODE
void setup()
(
randomSeed(analogRead(A0));
)

void loop()
(
analogWrite(11, random(256));
analogWrite(10, random(256));
analogWrite(9, random(256));
delay(1000);
)
