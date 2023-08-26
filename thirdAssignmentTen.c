#include <stdio.h>

int main() {
  int n,isPrime;
  isPrime = 1;
  printf("Enter a number : ");
  scanf("%d",&n);

  for(int i = 2; i < n;i ++){
    if(n % i == 0){
      isPrime = 0;
      break;
    }
  }

  if(isPrime == 0){
    printf("%d is not a Prime number ",n);
    }
    else if(n == 1){
    printf("%d is not a Prime number ",n);
    }
    else{
      printf("%d is a Prime number ",n);
    }
  return 0;
}