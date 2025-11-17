#include <stdio.h>

int main() {
    int n;
    int term = 1;    // first term
    int add = 1;     // increment starts from 1
    int sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + term;     // add current term
        term = term + add;    // generate next term
        add++;                // increment increases by 1
    }

    printf("Sum of series = %d", sum);

    return 0;
}
