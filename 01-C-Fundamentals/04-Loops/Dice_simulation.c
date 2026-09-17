#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

int main(){
    int i, rolledNumber, diceCounter[SIZE] = {0};
    srand(time(NULL));

    for(i = 0; i < 6000000; i++){
        rolledNumber = (rand() % 6);
        diceCounter[rolledNumber]++;
    }
    printf("%s\t%s\n", "Number", "Amount");
    for(i = 0; i < SIZE; i++){
        printf("%d\t%d\n", (i + 1), diceCounter[i]);
    }
}