#include<stdio.h>
int main(){
    int a,b;
    printf("");
    scanf("%d %d",&a,&b);
    if(a^2==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}