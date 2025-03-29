#include<stdio.h>
int main(){
    int N,sum=0,i;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum+=i;
        printf("%d",sum,N);
    }
    return 0;
}