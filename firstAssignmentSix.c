#include <stdio.h>

int main() {
  int a , b , c;
  printf("Enter numbers : ");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("before\n");
  printf("a : %d\n",a);
  printf("b : %d\n",b);

  c = a;
  a = b;
  b = c;
  printf("after\n");
  printf("a : %d\n",a);
  printf("b : %d",b);

  
  return 0;
}