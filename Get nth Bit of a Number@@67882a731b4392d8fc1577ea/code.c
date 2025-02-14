#include<stdio.h>
int getnthbit(int a,int n){
    if(n<0||n>=32){
        printf("");
        return -1;
    }
    return (a>>n)&1;
}
int main(){
    int a,n;
    printf("");
    scanf("%d %d",&a,&n);
    int bitvalue=getnthbit(a,n);
    if(bitvalue!=-1){
    printf("a=%d,n=%d,bitvalue=%d\n",a,n,bitvalue);
    }
    return 0;
}
