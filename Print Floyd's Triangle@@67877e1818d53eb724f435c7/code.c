#include<stdio.h>
int main(){
    int N,i,j;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=0;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}