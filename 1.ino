#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int p = 0;  // analog pin used to connect the potentiometer
int valor;    // variable to read the value from the analog pin

void setup()
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop()
{
   valor = analogRead(p);            // reads the value of the potentiometer (value between 0 and 1023)
  valor = map(valor, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(valor);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}