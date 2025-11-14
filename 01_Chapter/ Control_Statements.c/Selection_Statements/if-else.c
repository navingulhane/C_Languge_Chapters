IF-ELSE Statement
📌 Definition

The if-else statement lets your program choose between two options:
✔ one block when the condition is true
✔ another block when it is false

🧠 Syntax
if (condition) {
    // true block
} else {
    // false block
}

📝 Example
#include <stdio.h>

int main() {
    int marks = 40;

    if (marks >= 35) {
        printf("Pass");
    } else {
        printf("Fail");
    }

    return 0;
}
