#include<stdio.h>
int main(){
    char N,i,j;
    printf("");
    scanf("%d",&N);
    for(i='A';i<=N;i++){
        for(j='A';j<=N;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}