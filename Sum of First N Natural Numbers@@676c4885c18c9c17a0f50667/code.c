#include<stdio.h>
int main(){
    int i,N,sum=0;
    printf("");
    scanf("%d %d",&i,&N,&sum);
    for(i=1;i<=N;i++){
        sum+=i;
    }
    printf("%d",i,N,sum);
    return 0;
}