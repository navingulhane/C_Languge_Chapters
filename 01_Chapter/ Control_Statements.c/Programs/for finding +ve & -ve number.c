// Program for finding +ve & -ve number 
#include <stdio.h>

int main() {
    int num; // Declaration

    printf("Enter any number:\n");
    printf("==> ");
    scanf("%d",&num);
    
    if(num>0) {                               // Logic
        printf("%d is Positive Number",num);
    }
    else {
        printf("%d is Negative Number",num);
    }
    printf("\n===========================");

    return 0;
}
