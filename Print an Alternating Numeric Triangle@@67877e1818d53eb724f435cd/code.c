#include<stdio.h>
int main(){
    int N,n=1,i,j;
    printf("");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        N%2==0;
        for(j=0;j<=i;j++){
            printf("%d ",j);
            n=1-n;
        }
        printf("\n");
    }
    return 0;
}