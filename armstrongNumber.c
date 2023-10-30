#include <stdio.h>
#include <math.h>
int main(){
    int digit;
    int count = 0;
    int sum = 0, result = 0,rem;

    printf("Enter a digit : ");
    scanf("%d",&digit);
    int temp = digit;
    int isArmstrong = digit;

    while (digit != 0){
        digit = digit / 10;
        count++;
    }
    
    while(temp != 0){
        rem = temp % 10;
        result = pow(rem,count);
        sum = sum + result;
        temp = temp / 10;
    }
    
    if(sum == isArmstrong){
        printf("%d is a armstrong number!",isArmstrong);
    }
    else{
        printf("%d is not a armstrong number!",isArmstrong);
    }
    
    return 0;
}