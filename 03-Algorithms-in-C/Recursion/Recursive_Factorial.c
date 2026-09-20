#include <stdio.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }
    
    return n * factorial(n - 1);
}

int main(){
    int n = 0;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);

    printf("%d", factorial(n));

    return 0;
}