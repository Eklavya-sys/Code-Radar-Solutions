#include<stdio.h>
int main(){
    int i,j,k,N;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++){
            printf("");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}