#include<stdio.h>
int main(){
    int i,num1;
    printf("");
    scanf("%d %d",&num1);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",num1,i,num1*i);
    }

    return 0;
}