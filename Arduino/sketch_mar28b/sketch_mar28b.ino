const int button=2;
const int ledpin=13;
int buttonstate=0;

void setup() {
  pinMode(button,INPUT);
  pinMode(ledpin,OUTPUT);
  
  
  // put your setup code here, to run once:

}

void loop() {
  buttonstate=digitalRead(button);
  if(buttonstate=HIGH)
  {
    digitalWrite(ledpin,HIGH);
    
  }
  else
  {
    digitalWrite(ledpin,LOW);
    
  }
  // put your main code here, to run repeatedly:

}
