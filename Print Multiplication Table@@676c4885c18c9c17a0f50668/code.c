#include<stdio.h>
int main(){
    int i,num1,num2;
    printf("");
    scanf("%d %d",num1,num2);
    for(i=1;i<=10;i++){
        printf("%d X %d = %d",num1,i,num1*i);
    }
    for(i=1;i<=10;i++){
        printf("%d X %d = %d",num2,i,num2*i);
    }
    return 0;
}