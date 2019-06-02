void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(0, zero_cross_detect, RISING); // Attach an Interrupt to Pin 2 (Interrupt 0) for Zero Cross Detection
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
delay(10000);
digitalWrite(13, LOW);
delay(10000);
}

void zero_cross_detect()
{
Serial.println("ZCD");
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(100);
}
