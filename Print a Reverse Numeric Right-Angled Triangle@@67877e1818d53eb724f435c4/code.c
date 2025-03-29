#include<stdio.h>
int main(){
    int i,j,N;
    printf("");
    scanf("%d",&N);
    for(i=N;i>0;i--){
        for(j=1;j<=N;j++){
            printf("%d ",j);
              
        }
        printf("\n");
    }
    return 0;
}