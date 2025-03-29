#include<stdio.h>
int main(){
    int N,n=1,i,j;
    printf("");
    scanf("%d",&N);
    for(i=1;i<N;i++){
        n=i%2;
        for(j=1;j<=i;j++){
            printf("%d ",n);
            n=1-n;
        }
        printf("\n");
    }
    return 0;
}