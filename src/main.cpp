#include <Arduino.h>

#define RED1 7
#define YELLOW1 6
#define GREEN1 5
#define RED2 10
#define YELLOW2 9
#define GREEN2 8

int num = 0; 

void lights(){
   
  switch(num){

    case 0:
      digitalWrite(RED1,HIGH);
      digitalWrite(YELLOW1,LOW);
      delay(400);
      digitalWrite(RED2,LOW);
      digitalWrite(GREEN2,HIGH);
      delay(4000); 
      num++; 
      break; 

      case 1:
      digitalWrite(YELLOW2,HIGH);
      digitalWrite(GREEN2,LOW);
      delay(2200); 
      num++; 
      break; 
    
    case 2:
      digitalWrite(RED2,HIGH);
      digitalWrite(YELLOW2,LOW);
      delay(400);
      digitalWrite(RED1,LOW);
      digitalWrite(GREEN1,HIGH);
      delay(4000); 
      num++;
      break;
    
    case 3:
      digitalWrite(YELLOW1,HIGH);
      digitalWrite(GREEN1,LOW);
      delay(2200); 
      num=0; 
      break; 


  }

  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(RED1,OUTPUT);
  pinMode(YELLOW1,OUTPUT);
  pinMode(GREEN1,OUTPUT);
  pinMode(RED2,OUTPUT);
  pinMode(YELLOW2,OUTPUT);
  pinMode(GREEN2,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lights(); 
  
}