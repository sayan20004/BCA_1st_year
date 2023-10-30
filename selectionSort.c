#include <stdio.h>

int main() {
  int arr[50];
  int n, i, j;
  
  printf("Enter the size of array : ");
  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
  printf("\nEntered elements in array : ");
  for(i = 0; i < n; i++){
    printf("%d ",arr[i]);
  }

  for(i = 0; i < n - 1; i++){
    int min = i;
    for(j = i + 1; j < n; j++){
      if(arr[j] < arr[min]){
        min = j;
      }
    }
    //swaping whenever innerloops ends
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    
  }

  printf("\nFinal array : ");
  for(i = 0; i < n; i++){
    printf("%d ",arr[i]);
  }
  
  return 0;
}