#include <stdio.h>

int main (){
    int number1, number2, temp;

    printf("Enter first number: ");
    scanf("%d",  &number1);

    printf("Enter second number: ");
    scanf("%d",  &number2);

    printf("Before swap: Number 1 = %d and Number 2 = %d\n", number1, number2);

    int *p = &number1;
    int *t = &number2;

    temp = *p;
    *p = *t;
    *t = temp;

    printf("After swap: Number 1 = %d and Number 2 = %d", *p, *t);
}