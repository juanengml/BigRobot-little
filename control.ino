int motorA = 7;
int motorB = 6;

int motorC = 5;
int motorD = 4;

char cmd;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
  pinMode(motorC, OUTPUT);
  pinMode(motorD, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  cmd = Serial.read();
  switch (cmd){
    case 'w':
      digitalWrite(motorA, HIGH);
      digitalWrite(motorB, LOW);

      digitalWrite(motorC, HIGH);
      digitalWrite(motorD, LOW);
      Serial.println("run");
    break;

    case 's':
      digitalWrite(motorA, LOW);
      digitalWrite(motorB, HIGH);

      digitalWrite(motorC, LOW);
      digitalWrite(motorD, HIGH);
      Serial.println("back");    
    break;

    case 'd':
      digitalWrite(motorA, LOW);
      digitalWrite(motorB, HIGH);

      digitalWrite(motorC, HIGH);
      digitalWrite(motorD, LOW);
      Serial.println("right");

    break;

    case 'a':
      digitalWrite(motorA, HIGH);
      digitalWrite(motorB, LOW);
      digitalWrite(motorC, LOW);
      digitalWrite(motorD, HIGH);
      Serial.println("left");

    break;

    case 'p':
      digitalWrite(motorA, LOW);
      digitalWrite(motorB, LOW);
      digitalWrite(motorC, LOW);
      digitalWrite(motorD, LOW);
      Serial.println("stop");
    break;


  }
  
}
