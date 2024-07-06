// C++ code
//
int ledpin1=13;
int buttonpin=2;
void setup()
{
  pinMode(ledpin1, OUTPUT);
  pinMode(buttonpin,INPUT);
}

void loop()
{
    int kal=0;
  kal=digitalRead(buttonpin);  
  if(kal==HIGH)
  { digitalWrite(ledpin1,HIGH);
  }
  else
  {
    digitalWrite(ledpin1,LOW);
  }
}
