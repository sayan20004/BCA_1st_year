#include <stdio.h>

int main() {
int arr[50],i,n, search_value,display = 0,index; // display initially is false

  printf("Enter how many elements you want to store : ");
  scanf("%d",&n);
  

  //taking inputs in array
  for(i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element you want to find : ");
  scanf("%d",&search_value);

  //applying if else
  for(i = 0; i < n; i++){
    if(search_value == arr[i]){
      display = 1;
      index = i;
      break;
    }
  }

  if(display == 1){
    printf("%d is found at %d",search_value,index);
  }
  else{
    printf("%d is not found",search_value);
  }
  
  return 0;
}
