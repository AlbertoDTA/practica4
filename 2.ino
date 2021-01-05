int dir = 0; 
int vel = 0;
int prim = 9;
int seg = 8;       
int desconectar = 10;



void setup()
{
  pinMode(seg, OUTPUT); 
  pinMode(prim, OUTPUT);
  pinMode(desconectar, OUTPUT);
}

void loop() {
  int in = analogRead(A0);  
  vel = map(abs(in), 0, 1023, 0, 255);
  driveMotor(); 
}

void driveMotor() 
{
  digitalWrite(prim, LOW);
  digitalWrite(seg, HIGH);
  analogWrite(desconectar, vel);
}