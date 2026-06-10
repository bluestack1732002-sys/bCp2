#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if (num>0) {
        printf("Positive.\n");
    }
    else if (num == 0) {
        printf("0 is neither positive nor negative. It is neutral and comes in whole number.\n");
    }
    else {
        printf("Negative.\n");
    }
    return 0;
}