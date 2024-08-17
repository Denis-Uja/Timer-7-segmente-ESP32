int counter=15;
void setup ()
{
  pinMode(23, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(25, OUTPUT);

  pinMode(21, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(14, OUTPUT);

}
void loop()
{
  switch(counter/10)
  {
    case(0):
      digitalWrite(1, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(25, HIGH);
      digitalWrite(33, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(22, HIGH);
      digitalWrite(23, LOW);
      break;
    case(1):
      digitalWrite(1, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(25, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(32, LOW);
      digitalWrite(22, LOW);
      digitalWrite(23, LOW);
      break;
    case(2):
      digitalWrite(1, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(25, LOW);
      digitalWrite(33, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(22, LOW);
      digitalWrite(23, HIGH);
      break;
    case(3):
      digitalWrite(1, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(25, HIGH);
      digitalWrite(33, HIGH);
      digitalWrite(32, LOW);
      digitalWrite(22, LOW);
      digitalWrite(23, HIGH);
      break;
    case(4):
      digitalWrite(1, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(25, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(32, LOW);
      digitalWrite(22, HIGH);
      digitalWrite(23, HIGH);
      break;
    case(5):
      digitalWrite(1, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(25, HIGH);
      digitalWrite(33, HIGH);
      digitalWrite(32, LOW);
      digitalWrite(22, HIGH);
      digitalWrite(23, HIGH);
      break;
    case(6):
      digitalWrite(1, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(25, HIGH);
      digitalWrite(33, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(22, HIGH);
      digitalWrite(23, HIGH);
      break;
    case(7):
      digitalWrite(1, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(25, HIGH);
      digitalWrite(33, LOW);
      digitalWrite(32, LOW);
      digitalWrite(22, LOW);
      digitalWrite(23, LOW);
      break;
    case(8):
      digitalWrite(1, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(25, HIGH);
      digitalWrite(33, HIGH);
      digitalWrite(32, HIGH);
      digitalWrite(22, HIGH);
      digitalWrite(23, HIGH);
      break;
    case(9):
      digitalWrite(1, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(25, HIGH);
      digitalWrite(33, HIGH);
      digitalWrite(32, LOW);
      digitalWrite(22, HIGH);
      digitalWrite(23, HIGH);
      break;
  }

  switch(counter%10)
  {
    case(0):
      digitalWrite(18, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(14, HIGH);
      digitalWrite(27, HIGH);
      digitalWrite(26, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(21, LOW);
      break;
    case(1):
      digitalWrite(18, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(14, HIGH);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(19, LOW);
      digitalWrite(21, LOW);
      break;
    case(2):
      digitalWrite(18, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(14, LOW);
      digitalWrite(27, HIGH);
      digitalWrite(26, HIGH);
      digitalWrite(19, LOW);
      digitalWrite(21, HIGH);
      break;
    case(3):
      digitalWrite(18, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(14, HIGH);
      digitalWrite(27, HIGH);
      digitalWrite(26, LOW);
      digitalWrite(19, LOW);
      digitalWrite(21, HIGH);
      break;
    case(4):
      digitalWrite(18, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(14, HIGH);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(19, HIGH);
      digitalWrite(21, HIGH);
      break;
    case(5):
      digitalWrite(18, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(14, HIGH);
      digitalWrite(27, HIGH);
      digitalWrite(26, LOW);
      digitalWrite(19, HIGH);
      digitalWrite(21, HIGH);
      break;
    case(6):
      digitalWrite(18, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(14, HIGH);
      digitalWrite(27, HIGH);
      digitalWrite(26, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(21, HIGH);
      break;
    case(7):
      digitalWrite(18, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(14, HIGH);
      digitalWrite(27, LOW);
      digitalWrite(26, LOW);
      digitalWrite(19, LOW);
      digitalWrite(21, LOW);
      break;
    case(8):
      digitalWrite(18, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(14, HIGH);
      digitalWrite(27, HIGH);
      digitalWrite(26, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(21, HIGH);
      break;
    case(9):
      digitalWrite(18, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(14, HIGH);
      digitalWrite(27, HIGH);
      digitalWrite(26, LOW);
      digitalWrite(19, HIGH);
      digitalWrite(21, HIGH);
      break;
  }
  counter--;
  delay(1000);
}
