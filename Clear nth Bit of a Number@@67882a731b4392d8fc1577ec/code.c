#include<stdio.h>
int clearnthbit(int a,int n){
    int mask=~(1<<n);
    return mask&a;
}
int main(){
    int a,n;
    printf("");
    scanf("%d %d",&a,&n);
    int result=clearnthbit(a,n);
    printf("%d\n",n,a,result);
    return 0;
}

