#include <stdio.h>

int main(){
    int i, j, temp, n[10] = {1, 6, 8, 6, 9, 10, 24, 1, 2, 6};

    for(i = 0; i < 9; i++){
        for(j = i + 1; j < 10; j++){
            if(n[i] > n[j]){
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    
    for(i = 0; i < 10; i++){
        printf("%d ", n[i]);
    }

    return 0;
}