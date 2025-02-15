#include<stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
           printf("Vowel");
}
    else if(isalpha(a)){
        printf("Consonant");
    }
    else if(a>='0'&&a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}