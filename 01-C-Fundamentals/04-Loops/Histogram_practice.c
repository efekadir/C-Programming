#include <stdio.h>
#define SIZE 5

int main(){
    int i, j, numbers[SIZE] = {2, 5, 5, 12, 9};

    printf("%s\t%s\t%s\n", "Element", "Value", "Histogram");

    for(i = 0; i < SIZE; i++){
        printf("%d\t%d\t", i, numbers[i]);
        for(j = 0; j < numbers[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("----------------------------------\n");

    return 0;
}