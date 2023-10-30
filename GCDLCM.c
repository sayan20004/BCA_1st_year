#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    int a = num1, b = num2;
    while (a != b) {
        if (a > b){
            a = a - b; //15 25
        }    
        else{
            b = b - a;
        }
    }
    gcd = a;

    // Calculate LCM
    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    
    return 0;
}
