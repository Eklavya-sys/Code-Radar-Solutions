#include<stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d",&a);
    if(a&(1<<31)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
    
}