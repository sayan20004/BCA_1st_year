#include <stdio.h>

int main() {
  
  float rate, principal , time , interest; 
  printf("Enter Principal amount : ");
  scanf("%f",&principal);
  printf("Enter Rate : ");
  scanf("%f",&rate);
  printf("Enter Time : ");
  scanf("%f",&time);

  interest = (principal * rate * time)/100;
  printf("Interest : %.2f", interest);
  return 0;
}