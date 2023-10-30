#include <stdio.h>
int main(){
    int n; 
    float sum = 0.0;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        float fact = 1.0;
        for(int j = 1; j <= i;j++){
            fact = fact * j;
        }
        sum = sum + (i/fact);
    }

    printf("The sum is : %.2f",sum);

    return 0;
}