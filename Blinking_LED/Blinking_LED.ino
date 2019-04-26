
//For Upload problem: Select the available port from the Tools > Serial Port menu in the Arduino 
//software with the Arduino board connected to your 
//computer

// Blinking LED project

byte led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, HIGH);
delay(5000);
digitalWrite(led, LOW);
delay(5000);
}
