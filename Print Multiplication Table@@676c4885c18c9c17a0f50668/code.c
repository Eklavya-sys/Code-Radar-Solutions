#include<stdio.h>
int main(){
    int i,j,iXj;
    printf("");
    scanf("%d %d",&i,&j);
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            printf("%dX%d=%d\n",i,j,iXj);
        }
        printf("\n");
    }
    return 0;
}