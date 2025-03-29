#include<stdio.h>
int main(){
    int N,i,sum;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum+=i;
        printf("%d",sum,i);
    }
    return 0;
}