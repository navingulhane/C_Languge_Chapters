#include <stdio.h>

int main() {
    int a, b;

    // Asking user to enter two numbers
    printf("Enter two numbers:\n");
    printf("==> ");
    scanf("%d %d", &a, &b);

    // Comparing both numbers
    if(a > b) {
        // If 'a' is greater than 'b'
        printf("%d is the biggest number.", a);
    }
    else if(b > a) {
        // If 'b' is greater than 'a'
        printf("%d is the biggest number.", b);
    }
    else {
        // If both numbers are equal
        printf("Both numbers are equal.");
    }

    return 0; // End of program
}
