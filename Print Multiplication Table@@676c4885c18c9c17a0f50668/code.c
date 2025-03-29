#include<stdio.h>
int main(){
    int i,j,num1,num2;
    printf("");
    scanf("%d %d",num1,num2);
    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n",num1,i,num1*i);
    }
    for(j=1;j<=10;j++){
        printf("%d X %d = %d\n",num2,j,num2*j);
    }
    return 0;
}