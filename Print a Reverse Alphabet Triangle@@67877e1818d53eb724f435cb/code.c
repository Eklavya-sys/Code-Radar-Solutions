#include<stdio.h>
int main(){
    int N;
    char i,j;
    printf("");
    scanf("%d",&N);
    for(i='A';i>0;i--){
        for(j='A'+N;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}