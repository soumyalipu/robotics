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
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
      char data=Serial.read();
//      Serial.print("data:");
//      Serial.print(data);
//      Serial.print("   ");
      if(data=='w'){
          //forward
          forward();
          Serial.println("Forward");
        }
      if(data=='s'){
          //backward
          backward();
          Serial.println("Backward");
        }
      if(data=='a'){
          //left
          left();
          Serial.println("Left");
        }
      if(data=='d'){
          //right
          right();
          Serial.println("Right");
        }
      if(data=='q'){
          //stop
          m_stop();
          Serial.println("Stop");
        }
    }
}
