#include <stdio.h>

int main() {
  int n, sum, result = 0,i,j;

  printf("Enter a number : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum = 0;
    for (j = 1; j <= i; j++) {
      sum = sum + j;
    }
    result = result + sum;
  }

  printf("The Sum of Series %d is %d", n, result);

  return 0;
}
