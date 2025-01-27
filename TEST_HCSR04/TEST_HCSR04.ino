const int trigPin = 9;
const int echoPin = 7;

float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);//set trigger pin as output
  pinMode(echoPin, INPUT);//set echo pin as input
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);//initiate sensor to low
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);//initiate sensor to emit ultrasonic
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);//count time of ultrasonic wave
  distance = (duration*.0343)/2;//ultrasonic to distance formula
  Serial.print("Distance: ");
  Serial.println(distance);//print the distance value
  delay(100);
}
