#include<stdio.h>
#include<math.h>

int main() {
    int a, i;
    int isprime = 1;  // Assume the number is prime initially
    
    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &a);
    
    // Edge case handling
    if (a <= 1) {
        isprime = 0;  // Numbers less than or equal to 1 are not prime
    } 
    else if (a == 2) {
        isprime = 1;  // 2 is a prime number
    } 
    else {
        // Check divisibility from 2 to sqrt(a)
        for (i = 2; i <= sqrt(a); i++) {
            if (a % i == 0) {
                isprime = 0;  // Found a divisor, so it's not prime
                break;
            }
        }
    }

    // Output result
    if (isprime == 1) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
