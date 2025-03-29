#include<stdio.h>
int main(){
    int N,i,j,k,n=1;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++){
            printf(" ");
        }
        for(k=0;k<=2*i-1;k++){
            printf("%d",k);
            n=3-n;
        }
        printf("\n");
    }
    return 0;
}
