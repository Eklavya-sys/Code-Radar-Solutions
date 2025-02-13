#include<stdio.h>
int main(){
    char name[20];  // Increased size to hold more characters for the name
    char favouritehobby[20];  // Increased size for hobby
    int age; 

    // Take input from user
    printf("Enter your name, age, and favourite hobby: ");
    scanf("%s %d %s", name, &age, favouritehobby);

    // Print the fixed output based on the input
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", favouritehobby);

    return 0;
}
