#include <stdio.h>

int map[10][10] = {
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

int counter(int row, int col){

    if(row == 10){
        return 0;
    }

    if(col == 10){
        return counter(row + 1, 0);
    }

    if(map[row][col] == 1){
        return 1 + counter(row, col + 1);
    }

    return counter(row, col + 1);
}

int main(){
    printf("Amount of 1 in the matrix is: %d", counter(0, 0));
}