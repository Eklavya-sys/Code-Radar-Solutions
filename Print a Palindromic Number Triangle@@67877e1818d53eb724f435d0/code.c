#include<stdio.h>
int main(){
    int N,i,j,k,n;
    printf("");
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        for(j=0;j<=N-i;j++){
            printf(" ");
        }
        for(k=0;k<=2*i-1;k++){
            printf("%d",k);
            n=2-n;
        }
        printf("\n");
    }
    return 0;
}
