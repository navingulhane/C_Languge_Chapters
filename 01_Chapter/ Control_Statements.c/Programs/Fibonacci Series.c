#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, next;

    printf("Enter how many terms you want:\n");
    scanf("%d", &n);

    // Print first two terms
    printf("%d %d ", a, b);

    // Generate rest of the terms
    for(int i = 3; i <= n; i++) {
        next = a + b;   // sum of previous two numbers
        printf("%d ", next);
        a = b;          // shift forward
        b = next;
    }

    return 0;
}
