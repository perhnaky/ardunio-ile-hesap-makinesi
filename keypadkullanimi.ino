#include <Keypad.h>

const byte ROWS = 4; // SATIR 
const byte COLS = 4; // SUTUN
char buton;



char keys[ROWS] [COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad myKeypad = Keypad ( makeKeymap (keys), rowPins, colPins, ROWS, COLS );
void setup()
{
  Serial.begin(9600);// Keypadimizden gelen buton degerlrini okumaka icin seri ekrani baslatiyoruz
}
void loop()
{
  buton = myKeypad.getKey();//klavye adini verdigimiz keypadimizden gelen buton degerlerini ardunioya okutuyoruz
if (buton)
{
 Serial.println(buton);//seri ekrana basiilan buton degerlerini yazdiriyoruz
 }
}
