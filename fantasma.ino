#include <LiquidCrystal.h>
int rxPin = 7;
int ePint = 6;

LiquidCrystal a();
void setup() {
  // put your setup code here, to run once:
  a.begin(16,2); 

}

void loop() {
  // put your main code here, to run repeatedly:
  a.setCursor(0,0);
  for(int i=0; i<=16; i++){
    a.print();
  }
}
