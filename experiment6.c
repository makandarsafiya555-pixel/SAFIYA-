#include <stdio.h>
int main() {
 int marks[5]; // array of 5 integers
 int i;
 // Input values
 printf("Enter marks of 5 students:\n");
for(i = 0; i < 5; i++) {
 scanf("%d", &marks[i]);
 }
 // Display values
 printf("\nMarks of students are:\n");
 for(i = 0; i < 5; i++) {
 printf("Student %d: %d\n", i+1, marks[i]);
 }
 return 0;
}