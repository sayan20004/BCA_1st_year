#include<stdio.h>
int main(){
    int positive = 0,negative = 0,zero = 0;
    int n;
    int arr[50];
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            negative++;
        }
        else{
            zero++;
        }
    }
    

    printf("Positive numbers :  %d\n",positive);
    printf("Negative numbers :  %d\n",negative);
    printf("Zeros :  %d\n",zero);
    return 0;
}