#include <stdio.h>
int main() {
  int num;
  int i,j;
  float sum = 0.0;
  printf("Input any number: ");
  scanf("%d", &num);
  printf("1 ");
  for (i = 2; i <= num; i++)
    printf("+ 1/%d ", i);
  for (j = 1; j <= num; j++){
    sum = sum + 1.0 / j;
  }
  printf("\nSum = 1/%d = %f",num,sum);
  return 0;
}
