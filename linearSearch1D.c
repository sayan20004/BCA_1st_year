#include<stdio.h>
int main(){

    int arr[10] = {6,2,4,52,7,5,5,3,4,10};
    int size = 10,key,Found = 0,i;
    printf("Enter your key : ");
    scanf("%d",&key);
    for(i = 0; i<size; i++){
        if(key == arr[i]){
            Found = 1;
            break;
        }
    }
    if(Found == 1){
        printf("%d is found %d",key,i);
    }
    else{
        printf("%d is not found",key);
    }
    return 0;
}