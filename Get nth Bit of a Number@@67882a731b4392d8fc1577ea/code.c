#include<stdio.h>
int getnthbit(int a,int n){
    return (a>>n)&1;
}
int main(){
    int a,n;
    printf("");
    scanf("%d %d",&a,&n);
    int bitvalue=getnthbit(a,n);
    printf("a=%d,n=%d,bitvalue=%d\n",a,n,bitvalue);
    return 0;
}
