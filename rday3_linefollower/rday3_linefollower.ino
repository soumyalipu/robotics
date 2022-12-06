//left motor
#define mLeft1 D0
#define mLeft2 D1
//right Motor
#define mRight1 D2
#define mRight2 D3

//ir sensor
#define IR1 D5
#define IR2 D6

void setup() {
  // put your setup code here, to run once:
  pinMode(mLeft1,OUTPUT);
  pinMode(mLeft2,OUTPUT);
  pinMode(mRight1,OUTPUT);
  pinMode(mRight2,OUTPUT);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  Serial.begin(9600);
  Serial.println("Lets start the Robot");
}
void forward(){
  //for forward
    digitalWrite(mLeft1,1);
    digitalWrite(mLeft2,0);
    digitalWrite(mRight1,1);
    digitalWrite(mRight2,0);
  }
void backward(){
    digitalWrite(mLeft1,0);
    digitalWrite(mLeft2,1);
    digitalWrite(mRight1,0);
    digitalWrite(mRight2,1);
  }
void left(){
    digitalWrite(mLeft1,1);
    digitalWrite(mLeft2,0);
    digitalWrite(mRight1,0);
    digitalWrite(mRight2,1);
    }
void right(){
    digitalWrite(mLeft1,0);
    digitalWrite(mLeft2,1);
    digitalWrite(mRight1,1);
    digitalWrite(mRight2,0);
  }
void m_stop(){
    digitalWrite(mLeft1,0);
    digitalWrite(mLeft2,0);
    digitalWrite(mRight1,0);
    digitalWrite(mRight2,0);
  }
int leftvalue=0;
int rightvalue=0;
void loop() {
  rightvalue=digitalRead(IR1);
  leftvalue=digitalRead(IR2);
  if(rightvalue==0 && leftvalue==0){
      //forward
      forward();
      Serial.println("forward");
    }
  if(rightvalue==1 && leftvalue==1){
      //backward
      m_stop();
      Serial.println("Stop");
    }
   if(rightvalue==1 && leftvalue==0){
      //backward
      right();
      Serial.println("right");
    }
    if(rightvalue==0 && leftvalue==1){
      //backward
      left();
      Serial.println("left");
    }
}
