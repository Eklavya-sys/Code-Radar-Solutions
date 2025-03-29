#include <stdio.h>

int main() {
    int N, i, j, k, n = 1;
    scanf("%d", &N); 

    for (i = 1; i <= N; i++) {
        
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }

        
        for (k = 0; k < 2 * i - 1; k++) {
            if (n == 1) {
                printf("1");
                n = 2;
            } else {
                printf("2");
                n = 1;
            }
        }

        
        printf("\n");
    }

    return 0;
}
