#include <stdio.h>

int main() {
  int n,result,i;
  result = 0;
  printf("Enter a number : ");
  scanf("%d",&n);

  for(i = 1; i <= n; i++){
    if (i % 2 != 0){
      result = result + i;
    }
    else{
      result = result - i;
    }
  }
  printf("Result : %d",result);
  return 0;
}
