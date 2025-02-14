#include<stdio.h>
int clearnthbit(a,n){
    int mask~(1<<n);
    return mask&a;
}
int main(){
    int a,n,result;
    printf("");
    scanf("%d %d",&a,&n);
    result=cleanthbit(a,n);
    printf("%d",a,n,result);
    return 0;
}

