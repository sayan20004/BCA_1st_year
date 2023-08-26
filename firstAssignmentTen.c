#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate,amount,ci,time;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest: ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;

    printf("The compound interest is: %.2lf\n", ci);

    return 0;
}