#include<stdio.h>
int counttrailingzeroes(unsigned int a){
    int count==0{
        if(a==0){
            return 32;
        }
        while((a&1)==0){
            a>>=1;
            count++;
        }
        return count;
    }
int main(){
    unsigned int a;
    printf("");
    scanf("%d"&a);
    int trailingzeroes=counttrailingzeroes(a);
    printf("%d",a,trailingzeroes);
    return 0;
}

    }


