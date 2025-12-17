#include <stdio.h>
#define PI 3.14
int main() {
 int choice;
 float r, l, b, h, side, area;
 printf("Choose Shape to Find Area:\n");
 printf("1. Circle\n2. Rectangle\n3. Triangle\n4. Square\n");
scanf("%d", &choice);
 switch(choice) {
 case 1:
 printf("Enter radius: ");
 scanf("%f", &r);
 area = PI * r * r;
 printf("Area of Circle = %.2f\n", area);
 break;
 case 2:
 printf("Enter length and breadth: ");
 scanf("%f %f", &l, &b);
 area = l * b;
 printf("Area of Rectangle = %.2f\n", area);
 break;
 case 3:
 printf("Enter base and height: ");
 scanf("%f %f", &b, &h);
 area = 0.5 * b * h;
 printf("Area of Triangle = %.2f\n", area);
 break;
 case 4:
 printf("Enter side: ");
 scanf("%f", &side);
 area = side * side;
 printf("Area of Square = %.2f\n", area);
 break;
 default:
 printf("Invalid Choice!\n");
 }
 return 0;
}