#include <stdio.h>

int main() {
  int num1;
  float num2;

  printf("Enter integer value : ");
  scanf("%d",&num1);
  printf("Enter Float value : ");
  scanf("%f",&num2);
  
  printf("Int value : %d\n", num1);
  printf("Float value  : %.2f",num2);
  return 0;
}