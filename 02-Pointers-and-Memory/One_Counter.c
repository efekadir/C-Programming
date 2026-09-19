#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

/*  An example grill

int grill[10][10] = {
    {0, 0, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 1, 1, 0, 0},
    {0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
    {0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
*/

int** grill_generator(){
    int i, j, **grill = malloc(SIZE * sizeof(int *));

    for (i = 0; i < SIZE; i++) {
        grill[i] = malloc(SIZE * sizeof(int));
    }

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            grill[i][j] = rand() % 2;
        }
    }

    return grill;
}

int counter(int** grill, int row, int col){
    if(col >= SIZE){
        col = 0;
        row++;
    }

    if(row >= SIZE){
        return 0;
    }

    if(*(*(grill + row) + col) == 1){
        return 1 + counter(grill, row, col + 1);
    }

    return counter(grill, row, col + 1);
}

int main(){
    printf("Press ENTER to get different answers.\n");
    char input[100];
    srand(time(NULL));

    while(1){
        fgets(input, sizeof(input), stdin);
        int** grill = grill_generator();
        int i;

        printf("Amount of 1 in the matrix is: %d\n", counter(grill, 0, 0));

        for(i = 0; i < SIZE; i++){
            free(grill[i]);
        }

        free(grill);
    }

    return 0;
}