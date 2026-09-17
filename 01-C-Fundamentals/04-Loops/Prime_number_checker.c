#include <stdio.h>

int main(){
    int number, i, isPrime = 1;

    printf("Enter a number to check whether it is prime: ");
    scanf("%d", &number);

    if(number <= 1){
        printf("%d is not prime.", number);
        return 0;
    }
    for(i = 2; i * i <= number; i++){
        if(number % i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        printf("%d is prime.", number);
    }
    else{
        printf("%d is not prime.", number);
    }
    
    return 0;
}
