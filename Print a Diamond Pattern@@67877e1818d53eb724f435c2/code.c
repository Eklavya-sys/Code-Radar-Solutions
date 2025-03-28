#include<stdio.h>
int main(){
    int N,i,j;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=N;i>0;i--){
        for(j=1;j<=N;j++){
            printf(" ");
        }
        for(k=2*i-1;k>0;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}