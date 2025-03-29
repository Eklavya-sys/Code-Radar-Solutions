#include<stdio.h>
int main(){
    int N,n,i,j;
    printf("");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        n=i%2;
        for(j=0;j<=i;j++){
            printf("%d ",n);
            n=1-n;
        }
        printf("\n");
    }
    return 0;
}