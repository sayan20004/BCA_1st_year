#include <stdio.h>

int main() {
  char option;
  
  printf("choose an option : \nv - Violet\ni - Indigo\nb - Blue\ng - Green\ny - Yellow\no - Orange\nr - Red\n");
scanf("%c",&option);

  switch(option){
    case 'v':
    printf("Violet");
    break;
    case 'i':
    printf("Indigo");
    break;
    case 'b':
    printf("Blue");
    break;
    case 'g':
    printf("Green");
    break;
    case 'y':
    printf("Yellow");
    break;
    case 'o':
    printf("Orange");
    break;
    case 'r':
    printf("Red");
    break;
    default:
    printf("You have entered wrong input");
  }
  return 0;
}