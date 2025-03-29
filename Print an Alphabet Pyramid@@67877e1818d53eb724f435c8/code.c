#include<stdio.h>
int main(){
    int N;
    char i,j;
    printf("");
    scanf("%d",&N);
    for(i='A';i<=N;i++){
        for(j='A';j<='A'+N;j++){
            printf("c ",j);
        }
        printf("\n");
    }
    return 0;

}