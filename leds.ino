int led = 13;
int led2 = 10;
int led3 = 8;
int led4 = 6;

void setup()
  {
    pinMode(led, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
  }

void loop()
  {
    //led 13 on
    digitalWrite(led, HIGH);
    delay(1000);
    
    //led 10 on
    digitalWrite(led2, HIGH);
    delay(800);
    
    //led 8 on
    digitalWrite(led3, HIGH);
    delay(600);
    
    //led 6 on
    digitalWrite(led4, HIGH);
    delay(400);
    
    //led 13 off
    digitalWrite(led, LOW);
    delay(1000);
    
    //led 10 off
    digitalWrite(led2, LOW);
    delay(800);
    
    //led 8 off
    digitalWrite(led3, LOW);
    delay(600);
    
    //led 6 off
    digitalWrite(led4, LOW);
    delay(400);
  }
