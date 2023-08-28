//using limits.h header file

#include <stdio.h>
#include <limits.h>

int main() {
  int arr[50],i,n, small_number, max_number, small_index = 0, large_index = 0;

  //intializing mainimum and maximum
  small_number = INT_MAX;
  max_number = INT_MIN;
  
  printf("Enter how many elements you want to store : ");
  scanf("%d",&n);

  //taking inputs in array
  for(i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }

  //applying if else
  for(i = 0; i < n; i++){
    if(arr[i] > max_number){
      max_number = arr[i];
      large_index = i;
    }
    else if (arr[i] < small_number){
      small_number = arr[i];
      small_index = i;
    }
  }
  
  printf("Largest number: %d\n", max_number);
  printf("Index of largest number: %d\n", large_index);
  printf("Smallest number: %d\n", small_number);
  printf("Index of smallest number: %d\n", small_index);
  return 0;
}
