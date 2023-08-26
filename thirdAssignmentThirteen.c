#include <stdio.h>

int main() {
  int n,sumOfDigit, display,remainder,productOfDigit;
  remainder = 0;
  sumOfDigit = 0;
  productOfDigit = 1;
  
  printf("Enter a number : ");
  scanf("%d", &n);
  display = n;
  
  while (n >= !0) {
    remainder = n % 10;
    sumOfDigit = sumOfDigit + remainder;
    productOfDigit = productOfDigit * remainder;
    n = n / 10;
  }
  if(productOfDigit == sumOfDigit){
    printf("%d is Spy Number", display);
  }
  else{
    printf("%d is Not a Spy Number", display);
  }
  
  return 0;
}