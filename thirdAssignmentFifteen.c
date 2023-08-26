#include <stdio.h>

int main() {
    int num,i, originalNum, digit, factorial, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        factorial = 1;

        for ( i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        num = num / 10;
    }

    if (sum == originalNum)
        printf("%d is a Krishnamurthy number.\n", originalNum);
    else
        printf("%d is not a Krishnamurthy number.\n", originalNum);

    return 0;
}
