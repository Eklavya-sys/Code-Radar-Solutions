#include<stdio.h>
int main(){
    int N,i,j;
    printf("");
    scanf("%d",&N);
    for(i=0;i<N+1;i++){
        for(j=0;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}