#include <stdio.h>

int main(){
    unsigned int n1, n2, i, writer = 1u << 31;

    printf("Enter first number: ");
    scanf("%u", &n1);

    printf("Enter second number: ");
    scanf("%u", &n2);

    unsigned int result = n1 & n2;

    printf("Result in binary: ");

    for(i = 0; i < 32; i++){
        printf("%c", ((result & writer) ? '1' : '0'));
        writer >>= 1;
    }

    printf("\nResult in decimal: %u", result);

    return 0;
}
