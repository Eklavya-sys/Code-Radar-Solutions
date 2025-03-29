#include<stdio.h>
int main(){
    int N,i,sum=0;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum+=i;
        printf("%d\n",sum,N,i);
    }
    return 0;
}