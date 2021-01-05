int dir = 0;  
int vel = 0;
int seg = 8;       
int prim = 9;
int desconectar = 10;


void setup()
{
  pinMode(seg, OUTPUT);  
  pinMode(prim, OUTPUT);
  pinMode(desconectar, OUTPUT);
}

void loop() {
  int in = analogRead(A0); 
  vel = map(abs(in - 512), 0, 512, 0, 255); 
  if (in > 512)
    dir = 0;
  else
    dir= 1;
  driveMotor();
}

void driveMotor() 
{
  if (dir)
  {
    digitalWrite(prim, HIGH);
    digitalWrite(seg, LOW);
  }
  else
  {
    digitalWrite(prim, LOW);
    digitalWrite(seg, HIGH);
  }
  analogWrite(desconectar, vel);
}