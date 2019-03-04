const int PMWA = 5;
const int AIN1 = 2;
const int AIN2 = 4;
const int STBY = 3;
const int PMWB = 6;
const int BIN2 = 8;
const int BIN1 = 7;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite (STBY, HIGH);
  digitalWrite (AIN1, LOW);
  digitalWrite (AIN2, HIGH);
  digitalWrite (BIN1, LOW);
  digitalWrite (BIN2, HIGH);

analogWrite (PMWB, 179); // car goes straight for 1 second.
analogWrite (PMWA, 175);
delay (1000);

analogWrite (PMWB, 175); // car turns 90 degrees during this time. 
analogWrite (PMWA, 0);
delay (850);



}
