#include <stdio.h>
int main() {
    int num;
    printf("Enter a Year: ");
    scanf("%d",&num);

    if (num % 4 == 0) {
        if (num % 400 == 0){
            printf("Leap year.\n");
        }
        else if (num % 100 == 0) {
            printf("Not a leap year.\n");
        }
        else {
            printf("Leap year.\n");
        }
    }
    else {
        printf("Not a leap Year.\n");
    }
    return 0;
}