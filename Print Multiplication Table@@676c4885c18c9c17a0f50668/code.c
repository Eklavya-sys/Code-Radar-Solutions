#include<stdio.h>
int main(){
    int N,i,j;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            printf("%d*%d=%d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}