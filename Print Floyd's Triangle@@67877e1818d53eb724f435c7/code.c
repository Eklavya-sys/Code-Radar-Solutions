#include<stdio.h>
int main(){
    int N,number=1,i,j;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}