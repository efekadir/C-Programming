#include <stdio.h>

int main(){
    unsigned int n1, n2, i, writer = 1u << 31;

    printf("Enter first number: ");
    scanf("%u", &n1);

    printf("Enter second number: ");
    scanf("%u", &n2);

    unsigned int answer = n1 ^ n2;

    for(i = 0; i < 32; i++){
        printf("%c", ((answer & writer) ? '1' : '0'));
        writer >>= 1;
    }
}
