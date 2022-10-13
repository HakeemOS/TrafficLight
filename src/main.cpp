#include <Arduino.h>

#define RED 10
#define YELLOW 9
#define GREEN 8

int num = 0; 

void lights(){
   
  switch(num){

    case 0:
      digitalWrite(RED,HIGH);
      digitalWrite(YELLOW,LOW);
      digitalWrite(GREEN,LOW);
      delay(2000); 
      num++; 
      break; 
    
    case 1:
      digitalWrite(RED,LOW);
      digitalWrite(YELLOW,LOW);
      digitalWrite(GREEN,HIGH);
      delay(2500); 
      num++;
      break;
    
    case 2:
      digitalWrite(RED,LOW);
      digitalWrite(YELLOW,HIGH);
      digitalWrite(GREEN,LOW);
      delay(1200); 
      num=0; 
      break; 


  }

  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(RED,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  //pinMode(GREEN,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lights(); 
  //digitalWrite(RED,HIGH);
  //digitalWrite(YELLOW,HIGH);
  //digitalWrite(GREEN,HIGH);
  //delay(200);
}