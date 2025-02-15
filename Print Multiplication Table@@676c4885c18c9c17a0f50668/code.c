#include<stdio.h>
int main(){
    int i,N;
    printf("");
    scanf("%d",&i,&N);
    for(i=1;i<=N;i++){
        printf("%d*%d=%d",N,i);
    }
    return 0;
}