//8x5 led matrix
const int pos[]={13,12,11,10,9,8,A0,A1}; //positive
const int A[]={
  B10001000,
  B01110000,
  B01110000,
  B00000000,
  B01110000,
  B01110000,
  B11111000,
  B11111000
  
  };

const int B[]={
  B1001000,
  B01100000,
  B011100000,
  B00000000,
  B01110000,
  B01101000,
  B10011000,
  B11111000
  
  };
  
  const int T[]={
  B00000000,
  B11011000,
  B11011000,
  B11011000,
  B11011000,
  B11011000,
  B11111000,
  B11111000
  
  };
const int N[]={
  B11111000,
  B01110000,
  B00110000,
  B01010000,
  B01100000,
  B11111000,
  B11111000,
  B11111000
  
  };

  const int M[]={
  B01110000,
  B00100000,
  B01010000,
  B01110000,
  B01110000,
  B01110000,
  B11111000,
  B11111000
  
  };

const int Y[]={
  B01110000,
  B10101000,
  B11011000,
  B11011000,
  B11011000,
  B11011000,
  B11111000,
  B11111000
  
  };

  

  int i=0;
void setup() {
  // put your setup code here, to run once:
DDRD=B11111111;
DDRB=B11111111;
pinMode(A0,OUTPUT);
pinMode(A1,OUTPUT);
for(int x=0;x<8;x++){
  digitalWrite(pos[x],LOW);
  }
}

void loop() {
int z=0;
int j=30000;
  while(z<=j){
  if(i==8){
    i=0;
    }
  digitalWrite(pos[i],HIGH);
PORTD=T[i];
delayMicroseconds(10);
digitalWrite(pos[i],LOW);
  i++;
  z++;
  }
  z=0;
  while(z<=j){
  if(i==8){
    i=0;
    }
  digitalWrite(pos[i],HIGH);
PORTD=A[i];
delayMicroseconds(10);
digitalWrite(pos[i],LOW);
  i++;
  z++;
  }
 z=0;
while(z<=j){
  if(i==8){
    i=0;
    }
  digitalWrite(pos[i],HIGH);
PORTD=N[i];
delayMicroseconds(10);
digitalWrite(pos[i],LOW);
  i++;
  z++;
  }
 z=0;
while(z<=j){
  if(i==8){
    i=0;
    }
  digitalWrite(pos[i],HIGH);
PORTD=M[i];
delayMicroseconds(10);
digitalWrite(pos[i],LOW);
  i++;
  z++;
  }
z=0;
while(z<=j){
  if(i==8){
    i=0;
    }
  digitalWrite(pos[i],HIGH);
PORTD=A[i];
delayMicroseconds(10);
digitalWrite(pos[i],LOW);
  i++;
  z++;
  }
z=0;
while(z<=j){
  if(i==8){
    i=0;
    }
  digitalWrite(pos[i],HIGH);
PORTD=Y[i];
delayMicroseconds(10);
digitalWrite(pos[i],LOW);
  i++;
  z++;
  }
z=0;
delay(1000);
}
