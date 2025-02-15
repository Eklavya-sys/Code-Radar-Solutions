#include<stdio.h>
int main(){
    int i,N,product=1;
    printf("");
    scanf("%d",&i,&N);
    for(i=1;i<=N;i++){
        product*=i;
        printf("%d X %d = %d\n",product,N,i);
    }
    return 0;
}