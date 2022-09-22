int state = 0;

void setup() {
  // Output
  pinMode(3, OUTPUT); // Green LED
  pinMode(4, OUTPUT); // Red LED
  pinMode(5, OUTPUT); // Red LED

  // Input
  pinMode(2, INPUT);
  
}

void loop() {
  // Get the state by the method digitalRead()
  state = digitalRead(2);

  if (state == LOW){
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);   
    delay(250);
  }
  else{
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
}
