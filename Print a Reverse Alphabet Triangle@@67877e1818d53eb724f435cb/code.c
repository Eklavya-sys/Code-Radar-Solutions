#include<stdio.h>
int main(){
    int N;
    char i,j;
    printf("");
    scanf("%d",&N);
    for(i='A'-N;i>0;i--){
        for(j='A';j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}