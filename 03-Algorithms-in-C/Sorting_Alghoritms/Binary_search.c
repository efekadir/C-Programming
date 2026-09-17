#include <stdio.h>
#define SIZE 8

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

    printf("Sorted array: \n");
    for(i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int binarySearch(int *array, int key){
    int i, min = 0, max = SIZE - 1, middle = SIZE / 2;

    arraySorter(array);
    
    while(max >= min){
        if(key < array[middle]){
            max = middle - 1;
        }
        else if(key > array[middle]){
            min = middle + 1;
        }
        else{
            return middle;
        }
        middle = (max + min) / 2;
    }
    return -1;
}
int main(){
    int key = 8, array[SIZE] = {3, 4, 6, 8, 5, 9, 0, 1};

    printf("%d", binarySearch(array, key));
}