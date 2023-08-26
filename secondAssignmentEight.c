#include <stdio.h>

int main() {
  int units,Charge;
  
  printf("Enter the unit : ");
  scanf("%d", &units);

  if (units <= 200) {
    Charge = units * 5;
    printf("%d", Charge);
  } 
  else if (units <= 400) {
    Charge = 200 * 5 + (units - 200) * 6;
    printf("%d", Charge);
  } 
  else if (units <= 500) {
    Charge = 200 * 5 + 200 * 6 + (units - 400) * 7;
    printf("%d", Charge);
  } 
  else {
    Charge = 200 * 5 + 200 * 6 + 100 * 7 + (units - 500) * 8;
    printf("%d", Charge);
  }
  return 0;
}