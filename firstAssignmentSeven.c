#include <stdio.h>

int main() {
  int a , b ;
  printf("Enter numbers : ");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("before\n");
  printf("a : %d\n",a);
  printf("b : %d\n",b);

  a = a - b;
  b = a + b;
  a = b - a;
  printf("after\n");
  printf("a : %d\n",a);
  printf("b : %d",b);

  
  return 0;
}