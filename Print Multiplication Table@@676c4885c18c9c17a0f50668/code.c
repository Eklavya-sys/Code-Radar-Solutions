#include<stdio.h>
int main(){
    int i,N,product=1;
    printf("");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
        product*=i;
        printf("%d X %d = %d\n",product,i,N);
    }
    return 0;
}