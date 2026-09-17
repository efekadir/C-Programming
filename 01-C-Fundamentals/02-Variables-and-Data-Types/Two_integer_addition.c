#include <stdio.h>

int main(){
    int integer1, integer2;

    printf("Enter first integer: ");
    scanf("%d", &integer1);

    printf("Enter second integer: ");
    scanf("%d", &integer2);

    printf("The sum of the integers is: %d", (integer1 + integer2));

    return 0;
}
