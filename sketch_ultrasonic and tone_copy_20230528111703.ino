int trig=8;
int echo=9;
float D;
float t;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
t=pulseIn(echo,HIGH);
D=((t*0.0343)/2);
Serial.println("D:     ");
Serial.println(D);
Serial.println("   cm");
//if(D<=30){
//  tone(2,300);
//}else{
//  noTone(2);}
tone(2,300);
delay(D*10);
noTone(2);
delay(D*10);
}