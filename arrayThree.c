#include<stdio.h>
#include<limits.h>
int main(){
    int max = INT_MIN;
    int min = INT_MAX;
    int n,maxIndex,minIndex;
    int arr[50];
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
        else{
            min = arr[i];
            minIndex = i;
        }
    }
    printf("Largest number %d and Index %d\n",max,maxIndex);
    printf("Smallest number %d and Index %d\n",min,minIndex);
    

    return 0;
}