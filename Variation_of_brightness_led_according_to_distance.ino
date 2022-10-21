int trigPin = 10;
int echoPin = 9;
int Led = 6;
int brightness;
                                                                                                                              
float duration, distance;

void setup() {

  pinMode(Led, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;


  if(distance>=256){
    digitalWrite(Led,LOW);
    delay(0);
  }
  else(distance<256);
  {
    brightness=255-distance;
    analogWrite(Led,brightness);
    
 }
    delay(0);
  
   }
