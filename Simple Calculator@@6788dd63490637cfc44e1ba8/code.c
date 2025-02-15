#include <stdio.h>

int main() {
    int a, b;
    char operator;

    // Read input
    scanf("%d %d %c", &a, &b, &operator);

    // Check the operator and perform the corresponding operation
    if (operator == '+') {
        printf("%d + %d = %d\n", a, b, a + b);
    } 
    else if (operator == '-') {
        printf("%d - %d = %d\n", a, b, a - b);
    } 
    else if (operator == '*') {
        printf("%d * %d = %d\n", a, b, a * b);
    } 
    else if (operator == '/') {
        if (b != 0) {
            printf("%d / %d = %.2f\n", a, b, (float)a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Error: Unsupported operator.\n");
    }

    return 0;
}
