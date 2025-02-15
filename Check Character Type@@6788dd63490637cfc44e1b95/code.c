#include<stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
           printf("Vowel");
}
    else if(a!='a'&&a!='e'&&a!='i'&&a!='o'&&a!='u'){
        printf("Consonant");
    }
    else if(a>=0){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}