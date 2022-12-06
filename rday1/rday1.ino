//left motor
#define mLeft1 D0
#define mLeft2 D1
//right Motor
#define mRight1 D2
#define mRight2 D3

void setup() {
  // put your setup code here, to run once:
  pinMode(mLeft1,OUTPUT);
  pinMode(mLeft2,OUTPUT);
  pinMode(mRight1,OUTPUT);
  pinMode(mRight2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //for forward
  digitalWrite(mLeft1,1);
  digitalWrite(mLeft2,0);
  digitalWrite(mRight1,1);
  digitalWrite(mRight2,0);
  delay(2000);
  //for Backward
  digitalWrite(mLeft1,0);
  digitalWrite(mLeft2,1);
  digitalWrite(mRight1,0);
  digitalWrite(mRight2,1);
  delay(2000);
   //for Left
  digitalWrite(mLeft1,1);
  digitalWrite(mLeft2,0);
  digitalWrite(mRight1,0);
  digitalWrite(mRight2,1);
  delay(2000);
  //for Right
  digitalWrite(mLeft1,0);
  digitalWrite(mLeft2,1);
  digitalWrite(mRight1,1);
  digitalWrite(mRight2,0);
  delay(2000);
  //for stop
  digitalWrite(mLeft1,0);
  digitalWrite(mLeft2,0);
  digitalWrite(mRight1,0);
  digitalWrite(mRight2,0);
  delay(5000);
  

  
  
}
