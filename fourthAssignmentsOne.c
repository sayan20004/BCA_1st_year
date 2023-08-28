#include <stdio.h>

int main() {
  int arr[50],i,n;
  float average, sum = 0.0;
  printf("Enter how many elements you want to store : ");
  scanf("%d",&n);

  //taking inputs in array
  for(i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }

  //finding sum and average
  for(i = 0; i < n; i++){
    sum = sum + arr[i];
    average = sum / n;
  }
  
  printf("The sum of elements is %.2f\nAnd the average is %.2f", sum,average);
  return 0;
}
