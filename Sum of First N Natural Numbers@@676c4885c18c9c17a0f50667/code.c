#include<stdio.h>
int main(){
    int i,N,sum=0
    printf("");
    scanf("%d %d %d",&i,&sum,&N);
    for(i=1;i<=N;i++){
        sum+=i;
    }
    printf("%d",N,sum)
    return 0;
}