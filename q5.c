#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age >= 18) {
        printf("You are eligible to cast your own vote. \n");
    }
    else {
        printf("Not eligible. \n");
    }
    return 0;
}