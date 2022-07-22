char datafromUser=0;
int ledPin = 9;
void setup() {
  // код для настроек
  pinMode(ledPin,OUTPUT);  
  Serial.begin(9600);
//Serial.print("HELLO,WORD");
}

void loop() {
  // код для повторения в цикле
  if(Serial.available() > 0)
  {
    datafromUser=Serial.read();
  }


   if(datafromUser == '0')
  { 
    
    analogWrite(8, 255 );
   }
   if(datafromUser == '1')
  { 
    
    analogWrite(8, 0 );
   }
  if(datafromUser == '2')
  { 
    
    analogWrite(9, 255 );
   }
   if(datafromUser == '3')
  { 
    
    analogWrite(9, 0 );
   }

     
  if(datafromUser == '4'){   
    analogWrite(10, 255 );}
  if(datafromUser == '5'){   
    analogWrite(10, 0 );}

  if(datafromUser == '6'){   
    analogWrite(11, 255 );}
  if(datafromUser == '7'){   
    analogWrite(11, 0 );}

   if(datafromUser == '8'){   
    analogWrite(12, 255 );}
  if(datafromUser == '9'){   
    analogWrite(12, 0 );}
   
 // else if(datafromUser == '0')
 // {
   // analogWrite(8, LOW);
    //analogWrite(9, LOW);
  //}
  
}
