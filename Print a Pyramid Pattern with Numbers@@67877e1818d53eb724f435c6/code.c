#include<stdio.h>
int main(){
    int N,i,j,k;
    printf("");
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        for(j=1;j<=N-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}