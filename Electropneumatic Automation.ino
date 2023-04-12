int a0 = 13;
int a1 = 12;
int b0 = 2;
int b1 = 3;
int ae = 11;
int ar = 5;
int be = 6;
int br = 7;
int seq1=1, seq2=2, seq3=3, seq4=4;

//1 - A+, 2 - A-, 3 - B+, 4 - B-

void setup() {
  // put your setup code here, to run once:
  pinMode(a0, INPUT_PULLUP);   
  pinMode(a1, INPUT_PULLUP);  
  pinMode(b0, INPUT_PULLUP);    
  pinMode(b1, INPUT_PULLUP);
  pinMode(ae, OUTPUT);
  pinMode(ar, OUTPUT);
  pinMode(be, OUTPUT);
  pinMode(br, OUTPUT);
}

void sequence (int action){
  switch (seq1) {
  case 1:
    // A+
    while(digitalRead(a1)==0){
      digitalWrite(ae, HIGH);
      delay(1);
    }
    digitalWrite(ae, LOW);
    break;
  case 2:
    // A-
    while(digitalRead(a0)==0){
          digitalWrite(ar, HIGH);
           delay(1);
    }
    digitalWrite(ar, LOW);
    break;
  case 3:
    // B+
    while(digitalRead(b1)==0){
          digitalWrite(be, HIGH);
          delay(1);
    }
    digitalWrite(be, LOW);
    break;
  case 4:
     // B-
     while(digitalRead(b0)==0){
           digitalWrite(br, HIGH);
           delay(1);
     }
     digitalWrite(br, LOW);
     break;
  default:
    // statements
    break;
}
}

void loop(){
    sequence (seq1);
    sequence (seq2);
    sequence (seq3);
    sequence (seq4);
}
