#include<stdio.h>
int main(){
    int a,b;
    printf("");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Equal");
    }
    else if(a>b){
        printf("First");
    }
    else{
        print("Second");
    }
    return 0;
}