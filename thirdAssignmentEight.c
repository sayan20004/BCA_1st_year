#include <stdio.h>

int main() {
  int n,i;
  double sum = 0.0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum = sum + 1.0 / (i * i);
  }

  printf("Sum of the series: %.4f\n", sum);

  return 0;
}
