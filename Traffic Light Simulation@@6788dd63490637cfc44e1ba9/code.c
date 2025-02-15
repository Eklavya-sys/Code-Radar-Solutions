#include<stdio.h>
int main(){
    char a[5];
    printf("");
    scanf("%c",&a);
    if(a=="R"){
        printf("Stop");
    }
    else if(a=="G"){
        printf("Go");
    }
    else if(a=="Y"){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}