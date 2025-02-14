#include<stdio.h>
int getnthbit(a,n){
    return (a>>n)&1;
}
int main(){
    int a,n;
    printf("");
    scanf("%d %d",&a,&n);
    int bitvalue=getnthbit (a,n);
    return 0;
}
