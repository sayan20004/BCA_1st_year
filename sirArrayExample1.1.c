#include<stdio.h>
int main(){

    int n,i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++){
        printf("arr[%d] - ",i);
        scanf("%d",&arr[i]);
    }
    printf("Elements are - ");
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}