#include <stdio.h>

int main() {
  int n,i;
  printf("Enter a number : ");
  scanf("%d",&n);
  
  printf("Even : ");
  for(i = n; i >= 1; i--){
    if (i % 2 == 0){
      printf("%d " ,i);
    }
  }
  return 0;
}
