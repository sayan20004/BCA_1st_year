#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side1 == side3) {
            printf("Equilateral Triangle\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles Triangle\n");
        } else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Invalid Triangle\n");
    }

    return 0;
}
