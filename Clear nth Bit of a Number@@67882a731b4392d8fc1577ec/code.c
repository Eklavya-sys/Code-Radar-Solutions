#include<stdio.h>
int clearnthbit(int a,int n){
    int mask=~(1<<n);
    return mask&a;
}
int main(){
    int a,n;
    printf("");
    scanf("%d %d",&a,&n);
    if(n<0||n>31){
        printf("Invalid bit position. Must be between 0 and 31");
        return 1;
    }
    int result=clearnthbit(a,n);
    printf("%d\n",n,a,result);
    return 0;
}

