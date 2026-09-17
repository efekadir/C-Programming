#include <stdio.h>

int main(){
    unsigned int n1, n2, i, writer = 1u << 31;

    printf("Enter first number to shift: ");
    scanf("%u", &n1);

    printf("Enter the number of bits to shift: ");
    scanf("%u", &n2);

    if(n2 >= 32){
        printf("Enter a number less than 32");
        return 0;
    }

    unsigned int answer = n1 >> n2;

    for(i = 0; i < 32; i++){
        printf("%c", ((answer & writer) ? '1' : '0'));
        writer >>= 1;
    }

    return 0;
}
