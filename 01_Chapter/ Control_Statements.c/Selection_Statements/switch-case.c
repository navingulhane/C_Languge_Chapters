Switch-Case
  
📌 Definition

The switch-case statement is used when you want to check one variable against many fixed values.
It makes code cleaner than using many else-if statements.

🧠 Syntax
switch (variable) {
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code for no match
}

📝 Example
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        default: printf("Invalid day");
    }

    return 0;
}
