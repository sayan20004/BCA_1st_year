#include<stdio.h>
int main(){
    int isFound = 0, Index;
    int n,target;
    int arr[50];
    printf("Enter a number : ");
    scanf("%d",&n);

    int start = 0, end = n - 1;
    int mid = (start + end) / 2;

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the traget : ");
    scanf("%d",&target);
    while(start <= end){
        mid = (start + end) / 2;
        
        if(arr[mid] == target){
            isFound = 1;
            Index = mid;
            break;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    if(isFound == 1){
        printf("%d Found at Index %d\n",target,Index);
    }
    else{
        printf("Value not found");
    }


    return 0;
}