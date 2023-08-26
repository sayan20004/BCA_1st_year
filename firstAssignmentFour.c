#include <stdio.h>

int main() {
  int length, width, area, perimeter;
  printf("Enter value of width and length :\n");
  scanf("%d%d", &width, &length);

  // area
  area = length * width;
  // perimeter
  perimeter = 2 * (length + width);

  printf("Area : %d\nPerimeter : %d", area, perimeter);
  return 0;
}