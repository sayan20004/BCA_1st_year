#include <stdio.h>

int main() {
  int arr[50],i,n, negative = 0, positive = 0, zero = 0;
  
  printf("Enter how many elements you want to store : ");
  scanf("%d",&n);

  //taking inputs in array
  for(i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }

  //applying if else
  for(i = 0; i < n; i++){
    if(arr[i] > 0){
      positive ++;
    }
    else if(arr[i] == 0){
      zero++;
    }
    else{
      negative++;
    }
  }
  
  printf("Negative numbers are %d\nPositve numbers are %d\nZeros are %d",negative,positive,zero);
  return 0;
}
