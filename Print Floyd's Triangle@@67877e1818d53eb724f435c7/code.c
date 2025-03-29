#include<stdio.h>
int main(){
    int N,rows,i,j;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}