#include<stdio.h>

int main(){
    int value;
    int isFound = 0;
    int n,Index,target;
    int arr[50];
    printf("Enter a number : ");
    scanf("%d",&n);

    
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the traget : ");
    scanf("%d",&target);

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            value = arr[i];
            isFound = 1;
            Index = i;
            break;
        }
        
    }
    if(isFound == 1){
        printf("%d Found at Index %d\n",value,Index);
    }
    else{
        printf("Value not found");
    }

    return 0;
}