#include<stdio.h>
int main(){
    int N,n=1,i,j;
    printf("");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        N%2==0;
        for(j=0;j<=i;j++){
            printf("%d ",n);
            n=n-1;
        }
        printf("\n");
    }
    return 0;
}