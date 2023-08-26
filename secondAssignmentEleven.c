#include <stdio.h>

int main() {
  int weekdays;
  
  printf("choose an option : \n1 - Sunday\n2 - Monday\n3 - Tuesday\n4 - Wednesday\n5 - Thursday\n6 - Friday\n7 - Saturday\n");
scanf("%d",&weekdays);

  switch(weekdays){
    case 1:
    printf("Sunday");
    break;
    case 2:
    printf("Monday");
    break;
    case 3:
    printf("Tuesday");
    break;
    case 4:
    printf("Wednesday");
    break;
    case 5:
    printf("Thursday");
    break;
    case 6:
    printf("Friday");
    break;
    case 7:
    printf("Saturday");
    break;
    default:
    printf("You have entered wrong input");   
  }
  return 0;
}