#include <stdio.h>
int main() {
 int matrix[2][2]; 
 int i, j;
 // Input values
 printf("Enter elements of 2x2 matrix:\n");
 for(i = 0; i < 2; i++) {
 for(j = 0; j < 2; j++) {
 scanf("%d", &matrix[i][j]);
 }
 }
 // Display values
 printf("\nThe 2x2 matrix is:\n");
 for(i = 0; i < 2; i++) {
 for(j = 0; j < 2; j++) {
 printf("%d\t", matrix[i][j]);
 }
 printf("\n"); // new row
 }
 return 0;
}