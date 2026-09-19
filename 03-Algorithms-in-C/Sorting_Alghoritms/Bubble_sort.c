#include <stdio.h>

int main() {
    int temp, i, j, a[] = {1, 3, 5, 7, 8, 54, 37, 3, 9, 4};

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }

    return 0;
}