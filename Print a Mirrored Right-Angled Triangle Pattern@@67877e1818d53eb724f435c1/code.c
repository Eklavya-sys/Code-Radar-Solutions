#include<stdio.h>
int main(){
    int i,j,N,rows;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=rows;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("/n");
    }
    return 0;
}