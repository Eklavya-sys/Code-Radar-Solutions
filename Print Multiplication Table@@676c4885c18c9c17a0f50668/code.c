#include<stdio.h>
int main(){
    int i,N,product=0;
    printf("");
    scanf("%d",&i,&N);
    for(i=1;i<=N;i++){
        product+=i;
        printf("%dX%d=%d",product);
    }
    return 0;
}