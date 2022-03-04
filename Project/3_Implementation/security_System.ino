
const int trigger_pin = 2;
const int echo_pin = 3;
const int buzzer_pin = 10; 
const int redpin=5,orangepin=6,greenpin=7;
int time;
int distance; 
void setup() 
{
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
        pinMode (buzzer_pin, OUTPUT);
        pinMode(redpin, OUTPUT);
        pinMode(orangepin, OUTPUT);
        pinMode(greenpin, OUTPUT);
}
void loop() 
{
    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance= measureDist(time);
  
    

  if (distance <= 20) 
        {
                
        digitalWrite (buzzer_pin, HIGH);
        delay (500);
    digitalWrite(redpin,HIGH);
    
    delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(redpin, LOW);
    digitalWrite(greenpin,LOW);
    digitalWrite(orangepin,LOW);
        }
  else if(distance>20 && distance <=50) {
               
        digitalWrite (buzzer_pin, LOW);
        delay (500); 
    digitalWrite(redpin,LOW);
    digitalWrite(greenpin,LOW);
    digitalWrite(orangepin,HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(orangepin, LOW);
       } 

else
{
       
        digitalWrite (buzzer_pin, LOW);
        delay (500); 
    digitalWrite(redpin,LOW);
    digitalWrite(greenpin,HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(greenpin, LOW);
    digitalWrite(orangepin,LOW); 
}
}
int measureDist(int time)
{
  int distance1 = (time * 0.034) / 2;
  return distance1;
}
