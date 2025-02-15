#include<stdio.h>
int main(){
    int i,N;
    printf("");
    scanf("%d",&i,&N);
    for(i=1;i<=N;i++){
        product+=i;
        printf("%d*%d=%d",product);
    }
    return 0;
}