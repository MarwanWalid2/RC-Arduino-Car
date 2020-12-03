void m(int a,int b,int c,int d){
  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);
}
char x;
void setup() {
  Serial.begin(9600);
pinMode(2,1);
pinMode(3,1);
pinMode(4,1);
pinMode(5,1);
}
void loop() {
if(Serial.available()>0){
  x=Serial.read();
  switch(x)
  {
    case('F'):
    m(0,1,1,0);
    break;
    case('B'):
    m(1,0,0,1);
    break;
    case('R'):
    m(0,1,0,1);
    break;
    case('L'):
    m(1,0,1,0);
    break;
    case('S'):
    m(0,0,0,0);
    break;
    default:(0,0,0,0);
  }
}
}
