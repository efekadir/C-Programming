#include <stdio.h>

void insertNumber(int *numArray, int size, int num) {
    numArray[size] = num;
}

void sortArray(int *numArray, int size) {
    int value, i, j;

    for (i = 1; i < size; i++)
    {
        value = numArray[i];
        j = i - 1;
        while ((j >= 0) && (numArray[j] > value))
        {
            numArray[j + 1] = numArray[j];
            j--;
        }
        numArray[j + 1] = value;
    }
}

double findMedian(int *numArray, int size) {
    sortArray(numArray, size);

    int mid = (size - 1) / 2;

    if(size % 2 == 0){
        return (numArray[mid] + numArray[mid + 1]) / 2.0;
    }
    else{
        return numArray[mid];
    }
}

int main(){
    int numArray[1000] = {0};
    int newNumber = 0;
    int totalNumbers, i;

    printf("Enter how many numbers will you write: ");
    scanf("%d", &totalNumbers);

    for(i = 0; i < totalNumbers; i++){
        printf("Enter a number: \n");
        scanf("%d", &newNumber);
        insertNumber(numArray, i, newNumber);
    }

    printf("Median: %.1f", findMedian(numArray, totalNumbers));
}
