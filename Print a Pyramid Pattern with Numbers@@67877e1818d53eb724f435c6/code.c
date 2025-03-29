#include<stdio.h>
int main(){
    int N,i,j,k;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++){
            printf(" ");
        }
        for(k=1;k<=N-i;k++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}