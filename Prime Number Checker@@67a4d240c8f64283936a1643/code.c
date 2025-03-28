#include <stdio.h>


int isprime(int n);

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
    printf("Enter a number: ");
    scanf("%d", &n);
    
    
    if (isprime(n)) {
        printf("1\n");  
    } else {
        printf("0\n");  
    }

    return 0;
}
