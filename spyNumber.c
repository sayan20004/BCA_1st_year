#include<stdio.h>
int main(){
    int sum = 0, fact = 1, digit,rem;

    printf("Enter the digit : ");
    scanf("%d",&digit);
    int spyNumber = digit;
    
    while(digit != 0){
        rem = digit % 10;
        fact = fact * rem;
        sum = sum + rem;
        digit = digit / 10;
    }

    if(sum == fact){
        printf("%d is a spy number!",spyNumber);
    }
    else{
        printf("%d is not a spy number!",spyNumber);
    }
    

    return 0;
}