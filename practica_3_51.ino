
float RA=1000;//Byron Alejandro Pineda Barrientos
//2022121

float RB=10000;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
float V=(analogRead(A0)*5)/1023;
float Resultado=(V/(RB/(RA + RB)));
Serial.print("v = ");
Serial.println(Resultado);
delay(700);
}