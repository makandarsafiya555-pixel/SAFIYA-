#include <stdio.h>
#include <string.h>
int main() {
 char str1[50], str2[50], str3[50];
 // Input strings
 printf("Enter first string: ");
 gets(str1); // (or use fgets in modern compilers)
 printf("Enter second string: ");
 gets(str2);
 // String length
 printf("\nLength of first string = %d\n", strlen(str1));
 printf("Length of second string = %d\n", strlen(str2));
 // String copy
 strcpy(str3, str1);
 printf("\nAfter copying, str3 = %s\n", str3);
// String concatenation
 strcat(str1, str2);
 printf("\nAfter concatenation, str1 = %s\n", str1);
 // String comparison
 if(strcmp(str1, str2) == 0)
 printf("\nBoth strings are equal.\n");
 else
 printf("\nStrings are not equal.\n");
 return 0;
}