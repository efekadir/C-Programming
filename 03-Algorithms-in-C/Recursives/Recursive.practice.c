#include <stdio.h>

int energy(int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return 2;
    }
    else if(n == 2){
        return 3;
    }
    else if(n == 7){
        return energy(3) + energy(5) + 10;
    }
    else if(n % 2 != 0 && n != 7){
        return energy(n - 1) + energy(n - 3);
    }
    else{
        return energy(n / 2) + energy(n - 1);
    }
}

int main(){
    int n = 6;
    
    printf("%d", energy(n));
}