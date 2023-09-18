const int A0_in = 0;
const int D0 = 8;
const int led = 13;
int threshold ;
int a0_output ;

void setup(){
  Serial.begin(9600);
  pinMode(D0 , INPUT);
  pinMode(led , OUTPUT);
  }

void loop()
{
a0_output = analogRead(A0_in);
threshold = digitalRead(D0);
Serial.print(" ETHANOL : ");
Serial.println(a0_output);
Serial.print(" Threshold : "); 
Serial.print(threshold); 
delay(200);

if (threshold == HIGH){
  digitalWrite( led ,HIGH);
  }
else {
  digitalWrite(led , LOW);
  }  
}
