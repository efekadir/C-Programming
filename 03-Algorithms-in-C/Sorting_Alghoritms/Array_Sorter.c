#include <stdio.h>
#define SIZE 10

void arraySorter(int *array){
    int i, j, temp = 0;
    
    for(i = 1; i < SIZE; i++){
        for(j = i - 1; j >= 0; j--){
             if(array[j + 1] < array[j]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
             }
        }
    }
}

void arrayPrinter(int *array, int size){
    int i;

    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int array1[SIZE] = {9, 8, 4, 76, 32, 13, 6, 12, 45, 12};

    arraySorter(array1);
    arrayPrinter(array1, SIZE);

    return 0;
}