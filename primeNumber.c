#include<stdio.h>
int main(){
    int isPrime = 1;
    int n;

    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    
    if(n == 1){
        printf("%d is not a prime number!",n);
    }
    else if(n == 0){
        printf("%d is not a prime number!",n);
    }
    else if(isPrime == 1){
        printf("%d is a prime number!",n);
    }
    else{
        printf("%d is a not prime number!",n);
    }
    return 0;
}