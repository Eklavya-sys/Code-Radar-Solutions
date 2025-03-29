#include<stdio.h>
int main(){
    int N,i,j,k;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N+1;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}