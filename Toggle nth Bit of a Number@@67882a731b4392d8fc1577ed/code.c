#include<stdio.h>
void togglenthbit(int *a,int n){
*a=*a^(1<<n);
}
int main(){
    int a,n;
    printf("");
    scanf("%d %d",&a,&n);
    togglenthbit(&a,n);
    printf("%d",a,n);
    return 0;
}

    
