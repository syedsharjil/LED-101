int pinn1,pinn2,pinn3;

void setup() 
{
  // put your setup code here to run once:
  pinn1=5;
  pinn2=6;
  pinn3=7;
  pinMode(pinn1,OUTPUT);
  pinMode(pinn2,OUTPUT);
  pinMode(pinn3,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  int i;
  for(i=5;i<=7;i++)
  {
    digitalWrite(i,HIGH);
    delay(300);
    
  }
    for(i=7;i>=5;i--)
  {
    digitalWrite(i,LOW);
    delay(100);
    
  }
}
