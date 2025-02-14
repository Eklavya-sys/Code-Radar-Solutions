#include <stdio.h>

int countLeadingZeroes(unsigned int num) {
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break; 
        }
        count++; 
    }
    
    return count;
}

int main() {
    unsigned int num;
    
    printf("");
    scanf("%u", &num);
    
    int leadingZeroes = countLeadingZeroes(num);
    
    printf("%d", num, leadingZeroes);
    
    return 0;
}
