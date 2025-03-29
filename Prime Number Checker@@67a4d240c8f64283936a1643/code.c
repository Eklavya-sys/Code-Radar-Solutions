#include <stdio.h>

int isprime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &n);
    
    if (isprime(n)) {
        printf("1 (Prime)\n");
    } else {
        printf("0 (Not Prime)\n");
    }

    return 0;
}
