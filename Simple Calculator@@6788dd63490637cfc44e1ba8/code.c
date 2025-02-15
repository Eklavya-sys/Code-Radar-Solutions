#include <stdio.h>

int main() {
    int a, b;
    char operator;

    // Read input
    scanf("%d %d %c", &a, &b, &operator);

    // Check the operator and perform the corresponding operation
    if (operator == '+') {
        printf("%d+
