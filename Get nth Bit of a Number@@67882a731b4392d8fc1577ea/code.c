#include<stdio.h>
int main(){
    int a,n;
    printf("");
    scanf("%d %d",&a,&n);
    int bitvalue=getnthbit(a,n);
    printf("%d\n",n,a,bitvalue);
    return 0;
}
