#include <stdio.h>

int main() {
  int n,sumOfNumbers,i;
  sumOfNumbers = 0;
  printf("Enter a number : ");
  scanf("%d",&n);

  for(i = 1; i <= n; i ++){
    sumOfNumbers = sumOfNumbers + i;
  }
  printf("Sum of 1 - %d : %d",n,sumOfNumbers);
  return 0;
}
