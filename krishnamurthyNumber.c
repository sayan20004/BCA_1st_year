#include <stdio.h>

int main(){
    int digit;
    int count = 0;
    int sum = 0, result = 0,rem;

    printf("Enter a digit : ");
    scanf("%d",&digit);
    int isKrishnamurthy = digit;
    
    while(digit != 0){
        rem = digit % 10;
        int fact = 1;
        for(int i = rem; i >= 1; i--){
            fact = fact * i;
        }
        sum = sum + fact;
        digit = digit / 10;
    }
   
    
    if(sum == isKrishnamurthy){
        printf("%d is a Krishnamurthy number!",isKrishnamurthy);
    }
    else{
        printf("%d is not a Krishnamurthy number!",isKrishnamurthy);
    }
    
    return 0;
}