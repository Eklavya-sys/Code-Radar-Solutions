#include<stdio.h>
int main(){
    int N=1,rows,i,j;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",N);
        }
        printf("\n");
    }
    return 0;
}