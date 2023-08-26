#include <stdio.h>

int main() {
  
  int celsius , fahrenheit;
  printf("Temp in f : ");
  scanf("%d",&fahrenheit);
  celsius = (5*fahrenheit - 160)/9;
  printf("Temp. in c : %d",celsius);
  return 0;
}