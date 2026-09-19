#include <stdio.h>
#define SIZE 10

int main(){
    int i, j, key, temp, array[SIZE] = {1, 6, 8, 6, 9, 10, 24, 1, 2, 6};

    for (i = 1; i < SIZE; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
    
    for(i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }

    return 0;
}