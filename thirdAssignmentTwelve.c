#include <stdio.h>

int main() {
  int n, checkPalindrome, reverse, remainder;
  remainder = 0;
  reverse = 0;
  
  printf("Enter a number : ");
  scanf("%d", &n);
  checkPalindrome = n;
  
  while (n >= !0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder ;
    n = n / 10;
  }
  if(reverse == checkPalindrome){
    printf("%d is a Palindrome number", checkPalindrome);
  }
  else{
    printf("%d is not a Palindrome number", checkPalindrome);
  }
  
  return 0;
}