#include <stdio.h>
// 1. No arguments, no return value
void greet() {
 printf("Hello! Welcome to C Functions.\n");
}
// 2. Arguments, no return value
void displaySum(int a, int b) {
 printf("Sum = %d\n", a + b);
}
// 3. No arguments, return value
int giveNumber() {
 return 10;
}
// 4. Arguments with return value
int multiply(int x, int y) {
 return x * y;
}
int main() {
 int result;
 // 1. Function with no arguments and no return value
 greet();
 // 2. Function with arguments but no return value
 displaySum(5, 7);
 // 3. Function with no arguments but return value
 result = giveNumber();
 printf("Number returned = %d\n", result);
 // 4. Function with arguments and return value
 result = multiply(4, 6);
 printf("Multiplication = %d\n", result);
 return 0;
}