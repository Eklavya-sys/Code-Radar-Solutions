#include<stdio.h>
#include<math.h>
int main(){
    int a,i;
    int isprime=1;
    printf("");
    scanf("%d",&a);
    if(a<=1){
       isprime=0;
}
    else{
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0){
            isprime=0;
            break;
        }

    }
}
if(isprime==1){
    printf("Prime");
}
else{
    printf("Not Prime");
}
return 0;
}