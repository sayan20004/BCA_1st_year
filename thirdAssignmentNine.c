#include<stdio.h>
int main(){
	int i ,n;
	float sum = 0.0, factorial = 1.0;
	printf("Enter the value of n: ");
  	scanf("%d", &n);
	for (i = 1; i <= n; i++){
    factorial = factorial * i;
    sum = sum + (i/factorial);
  }
	printf("Sum of the series: %.4f\n", sum);
	return 0;
}
