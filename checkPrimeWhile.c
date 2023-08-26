#include<stdio.h>
int main(){
    int i = 2, num, checkPrime = 1;
    printf("Enter a number : ");
    scanf("%d",&num);

    while(i < num){
        if(num % i == 0){
            checkPrime = 0;
        }
        i++;
    }
    if(num == 1){
        printf("%d is not a prime number\n",num);
        }
    else if (checkPrime == 0){
        printf("%d Its not a Prime number\n",num);
    }
    else{
        printf("%d its a prime number\n",num);
    }
    return 0;
}