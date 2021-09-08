
int kanal_1=0;
int kanal_2=0;
int kanal_3=0;
int kanal_4=0;
int kanal_5=0;

int y1=0;//вспомогат для писка клавиши светодиода
int y2=0;
int y3=0;
int y4=0;
int y5=0;


void setup() {

pinMode(9,OUTPUT); // светодиод канала 1 (выход +5 Вольт)
pinMode(8,OUTPUT); // светодиод канала 2 (выход +5 Вольт)
pinMode(7,OUTPUT); // светодиод канала 3 (выход +5 Вольт)
pinMode(6,OUTPUT); // светодиод канала 4 (выход +5 Вольт)
pinMode(5,OUTPUT); // светодиод канала 5 (выход +5 Вольт)
pinMode(4,OUTPUT); //зуммер
pinMode(3,INPUT); //клавиша  1 (вход -5 Вольт)
pinMode(2,INPUT); //клавиша  2 (вход -5 Вольт)
pinMode(10,INPUT); //клавиша 3 (вход -5 Вольт)
pinMode(11,INPUT); //клавиша 4 (вход -5 Вольт)
pinMode(12,INPUT); //клавиша 5 (вход -5 Вольт)

}

void loop() {
  
kanal_1=digitalRead(10); //нажатие клавиши 1
kanal_2=digitalRead(3); //нажатие клавиши 2
kanal_3=digitalRead(2); //нажатие клавиши 3
kanal_4=digitalRead(11); //нажатие клавиши 4
kanal_5=digitalRead(12); //нажатие клавиши 5

int dat1=analogRead(A7); //сигнал датчика 1
int dat2=analogRead(A0); //сигнал датчика 2
int dat3=analogRead(A1); //сигнал датчика 3
int dat4=analogRead(A2); //сигнал датчика 4
int dat5=analogRead(A3); //сигнал датчика 5


digitalWrite(4,LOW); //глушим зуммер


if ((kanal_1==LOW) and (y1==0))  
         {         
         digitalWrite(9,HIGH);
         digitalWrite(4,HIGH);
         delay(400);
         digitalWrite(4,LOW);
         delay(400);
         y1=1;
             }
if (kanal_1==HIGH) {y1=0;digitalWrite(9,LOW);} 


if ((kanal_2==LOW) and (y2==0))  
         {         
         digitalWrite(8,HIGH);
         digitalWrite(4,HIGH);
         delay(400);
         digitalWrite(4,LOW);
         delay(400);
         y2=1;
             }
if (kanal_2==HIGH) {y2=0;digitalWrite(8,LOW);} 


if ((kanal_3==LOW) and (y3==0))  
         {         
         digitalWrite(7,HIGH);
         digitalWrite(4,HIGH);
         delay(400);
         digitalWrite(4,LOW);
         delay(400);
         y3=1;
             }
if (kanal_3==HIGH) {y3=0;digitalWrite(7,LOW);} 


if ((kanal_4==LOW) and (y4==0))  
         {         
         digitalWrite(6,HIGH);
         digitalWrite(4,HIGH);
         delay(400);
         digitalWrite(4,LOW);
         delay(400);
         y4=1;
             }
if (kanal_4==HIGH) {y4=0;digitalWrite(6,LOW);} 

if ((kanal_5==LOW) and (y5==0))  
         {         
         digitalWrite(5,HIGH);
         digitalWrite(4,HIGH);
         delay(400);
         digitalWrite(4,LOW);
         delay(400);
         y5=1;
             }
if (kanal_5==HIGH) {y5=0;digitalWrite(5,LOW);}  
              
 

   if ((dat1>500) and (kanal_1==LOW))
           {
         delay(500);
         dat1=analogRead(A7);
         if (dat1>500)  
         {
         digitalWrite(9,LOW);
         digitalWrite(4,HIGH);
         delay(400);
         digitalWrite(9,HIGH);
         digitalWrite(4,LOW);
         delay(400);
           }
           } 
    if ((dat2>500) and (kanal_2==LOW))
           {
         delay(500);
         dat2=analogRead(A0);
         if (dat2>500)
         {
         digitalWrite(8,LOW);
         digitalWrite(4,HIGH);
         delay(400);
         digitalWrite(8,HIGH);
         digitalWrite(4,LOW);
         delay(400);
           } 
           }
    if ((dat3>500) and (kanal_3==LOW))
           {
         delay(500);
         dat3=analogRead(A1);
         if (dat3>500){
         digitalWrite(7,LOW);
         digitalWrite(4,HIGH);
         delay(400);
         digitalWrite(7,HIGH);
         digitalWrite(4,LOW);
         delay(400);
           } 
           }
    if ((dat4>500) and (kanal_4==LOW))
           {
         delay(500);
         dat4=analogRead(A2);
         if (dat4>500){   
         digitalWrite(6,LOW);
         digitalWrite(4,HIGH);
         delay(400);
         digitalWrite(6,HIGH);
         digitalWrite(4,LOW);
         delay(400);
           } 
           }

     
          
}
