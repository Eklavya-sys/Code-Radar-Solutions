#include<stdio.h>
#include<math.h>

int main(){
    int a, i;
    int isprime = 1;

    // Prompt for input
    printf("Enter a number: ");
    scanf("%d", &a);

    // Handle cases where the input number is less than or equal to 1
    if(a <= 1){
        isprime = 0;
    }
    else{
        // Check divisibility from 2 to sqrt(a)
        for(i = 2; i <= sqrt(a); i++){
            if(a % i == 0){
                isprime = 0;
                break;
            }
        }
    }

    // Output whether the number is prime or not
    if(isprime == 1){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }

    return 0;
}
