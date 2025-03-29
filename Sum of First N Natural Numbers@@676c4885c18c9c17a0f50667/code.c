#include<stdio.h>
int main(){
    int N,i,sum;
    printf("");
    scanf("%d",&sum);
    for(i=1;i<=N;i++){
        sum+=i;
        printf("%d",sum);
    }
    return 0;
}