#include<stdio.h>
int countleadingzeroes(unsigned int a){
    int count=0;
    for(int i=31,i>=0,i--){
        if((a>>i)&1){
            break;
        }
            count++;
        }
        return count;
    }
    int main(){
        unsigned int a;
        printf("");
        scanf("%u",&a);
        int leadingzeroes=countleadingzeroes(a);
        printf("%d",a,leadingzeroes);
        return 0;

    }
