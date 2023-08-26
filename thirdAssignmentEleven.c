#include <stdio.h>

int main() {
  int n,sumOfNumbers;
  sumOfNumbers = 0;
  printf("Enter a number : ");
  scanf("%d",&n);

  for(int i = 1; i < n; i ++){
    if (n % i == 0){
      sumOfNumbers = sumOfNumbers + i;
    }
  }
  if(sumOfNumbers == n){
    printf("%d is a perfect number ",n);
  }
  else{
    printf("%d is not a perfect number ",n);
  }
  return 0;
}