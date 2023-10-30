#include<stdio.h>
int main (){
    int digit;
    int rem, rev = 0;
    printf("Enter a digit : ");
    scanf("%d",&digit);
    int isPalindrome = digit;

    while(digit != 0){
        rem = digit % 10;
        rev = rev * 10 + rem;
        digit = digit / 10;
    }
    
    if(rev == isPalindrome){
        printf("%d is a palindrome number!",isPalindrome);
    }
    else{
        printf("%d is a not palindrome number!",isPalindrome);
    }

    return 0;
}