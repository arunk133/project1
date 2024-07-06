// C++ code
//
int motorpin=8;
int soilpin=5;
void setup()
{
  pinMode(motorpin, OUTPUT);
  pinMode(soilpin,INPUT);
}

void loop()
{
    int kal=0;
  kal=digitalRead(soilpin);  
  if(kal==HIGH)
  { digitalWrite(motorpin,LOW);
  }
  else
  {
    digitalWrite(motorpin,HIGH);
  }
}