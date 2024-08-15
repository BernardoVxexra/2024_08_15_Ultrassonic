int trig = 5;
int echo = 6;
int ledvermelho = 4;
int ledverde = 2;
int ledamarelo = 3;
const int buzzer = 9;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(ledvermelho,OUTPUT);
  pinMode(ledverde,OUTPUT);
  pinMode(ledamarelo,OUTPUT);
  pinMode(ledvermelho,OUTPUT);
  pinMode(buzzer,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2); 
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trig, LOW);
  
   int duracao = pulseIn(echo, HIGH);
  int distancia = (duracao/2) / 29.1;
 
  Serial.println(distancia);
  if(distancia >= 290 and distancia <= 300){
    digitalWrite(ledverde, HIGH);
     tone(buzzer, 1500);
    delay(200);}
  else{
    digitalWrite(ledverde, LOW);
    noTone(buzzer);
    delay(200);}
    
  if(distancia >= 190 and distancia <= 200){
    digitalWrite(ledamarelo, HIGH);
     tone(buzzer, 2500);
     delay(200);}
  else{
    digitalWrite(ledamarelo, LOW);
    noTone(buzzer);
    delay(200);
    
   if(distancia >= 100 and distancia <= 150){
    digitalWrite(ledvermelho, HIGH);
     tone(buzzer, 3500);
    delay(200);}
    else{
    digitalWrite(ledvermelho, LOW);
    noTone(buzzer);
    delay(100);
    }
  }
  
}