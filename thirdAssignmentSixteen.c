#include <stdio.h>

int main() {
    int n,i, first = 0, second = 1, next = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", first, second);

    for (i = 1; i <= n-2; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    return 0;
}
