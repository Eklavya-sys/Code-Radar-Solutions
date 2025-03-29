#include<stdio.h>
int main(){
    int N,i,j;
    printf("");
    scanf("%d",&N);
    for(i=N;i>0;i++){
        for(j=0;j<=N;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}