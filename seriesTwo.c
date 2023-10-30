#include<stdio.h>
int main(){
    int sum = 0, n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        int store = 0;
        for(int j = 1; j <= i; j++){
            store = store + j;
        }
        sum = sum + store;
        
    }
    
    printf("The sum is : %d",sum);

    return 0;
}