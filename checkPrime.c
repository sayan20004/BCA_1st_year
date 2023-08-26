#include<stdio.h>
int main(){
    int num, checkPrime = 1,i;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i = 2; i < num; i++){
        if (num % i == 0){
            checkPrime = 0;
            break;
        }
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
