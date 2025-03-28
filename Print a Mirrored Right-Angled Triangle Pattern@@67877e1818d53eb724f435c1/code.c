#include<stdio.h>
int main(){
    int i,j,k,N;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=0;j<i;j++){
            printf("");
            for(k=0;k<=N-i+1;k++);
            printf("*");
        }
        printf("\n");
    }
    return 0;
}