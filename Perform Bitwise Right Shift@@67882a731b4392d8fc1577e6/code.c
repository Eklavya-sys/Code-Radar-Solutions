#include<stdio.h>
intb main(){
    int a,b,result;
    printf("");
    scanf("%d %d",&a,&b);
    result=a>>b;
    printf("%d",result);
    return 0;
}