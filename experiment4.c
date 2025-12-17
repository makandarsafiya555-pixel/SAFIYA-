#include<stdio.h>

int main() {
        int num;
        printf("Enter a number:");
        scanf("%d",&num);
    
    //if-else-if ladder
    if (num>0) {
        printf("The number is Positive.\n");
    }
    else if (num<0) {
        printf("The number is negative.\n");
    }
    else {
        printf("The number is Zero.\n");
    }

    return 0;
}