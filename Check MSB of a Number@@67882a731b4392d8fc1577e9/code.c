#include<stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d",&a);
    if(a|0||a&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
    
}