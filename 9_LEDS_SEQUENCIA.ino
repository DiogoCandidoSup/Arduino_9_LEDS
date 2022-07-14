int leds[] = {4, 5, 6, 7, 8, 9, 10, 11, 12}; //PINOS
int contador = 0; 
int timer  = 110; //INTERVALO

void setup()
{
  for(contador = 0; contador < 9; contador ++)
  {
    pinMode(leds[contador], OUTPUT); //DEFINE OS PINOS COMO SAÍDA
  }
}
void loop()
{
  for(contador = 0; contador < 9; contador ++)
  { 
    digitalWrite(leds[contador], HIGH); //ACENDE O LED
    delay(timer); //INTERVALO
    contador ++;
    digitalWrite(leds[contador], HIGH); //ACENDE O LED
    delay(timer); //INTERVALO
    contador ++;
    digitalWrite(leds[contador], HIGH); //ACENDE O LED
    delay(timer); //INTERVALO
    contador ++;
    digitalWrite(leds[contador], HIGH); //ACENDE O LED
    delay(timer); //INTERVALO
    contador ++;
    digitalWrite(leds[contador], HIGH); //ACENDE O LED
    delay(timer); //INTERVALO
    contador ++;
    digitalWrite(leds[contador], HIGH); //ACENDE O LED
    delay(timer); //INTERVALO
    contador ++;
    digitalWrite(leds[contador], HIGH); //ACENDE O LED
    delay(timer); //INTERVALO
    contador ++;
    digitalWrite(leds[contador], HIGH); //ACENDE O LED
    delay(timer); //INTERVALO
    contador ++;
    digitalWrite(leds[contador], HIGH); //ACENDE O LED
    delay(timer); //INTERVALO
    contador ++;
    
    digitalWrite(leds[contador], LOW); //APAGA O LED
    delay(timer); //INTERVALO
    contador --;
    digitalWrite(leds[contador], LOW); //APAGA O LED
    delay(timer); //INTERVALO
    contador --;
    digitalWrite(leds[contador], LOW); //APAGA O LED
    delay(timer); //INTERVALO
    contador --;
    digitalWrite(leds[contador], LOW); //APAGA O LED
    delay(timer); //INTERVALO
    contador --;
    digitalWrite(leds[contador], LOW); //APAGA O LED
    delay(timer); //INTERVALO
    contador --;
    digitalWrite(leds[contador], LOW); //APAGA O LED
    delay(timer); //INTERVALO
    contador --;
    digitalWrite(leds[contador], LOW); //APAGA O LED
    delay(timer); //INTERVALO
    contador --;
    digitalWrite(leds[contador], LOW); //APAGA O LED
    delay(timer); //INTERVALO
    contador --;
    digitalWrite(leds[contador], LOW); //APAGA O LED
    delay(timer); //INTERVALO
    contador --;
  }
}
