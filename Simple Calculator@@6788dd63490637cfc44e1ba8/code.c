#include<stdio.h>
int main(){
    int a,b,+,-,*,/;
    printf("");
    scanf("%d",&a,&b);
    if(a+=b){
        printf("",+);
    }
    else if(a-=b){
        printf("",-);
    }
    else if(a*=b){
        printf("",*);
    }
    else{
        print("",/);
    }
    return 0;
}