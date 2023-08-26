#include <stdio.h>

int main() {
  int num1;
  printf("Number : ");
  scanf("%d", &num1);

  if (num1 > 0){
    printf("%d is a Positive number.",num1);
  }
  else if(num1 == 0){
   printf("You Entered Zero.");
  }
  else{
    printf("%d is a Negative",num1);
  }
  return 0;
}