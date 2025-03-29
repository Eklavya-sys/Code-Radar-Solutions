#include<stdio.h>
int main(){
    int N,n;
    printf("");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        for(j=0;j<=i;j++){
            printf("%d ",n);
            n=1-n
        }
        printf("\n");
    }
    return 0;
}