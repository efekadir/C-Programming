#include <stdio.h>


int main(){
    enum months{JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER}monthNumber;

    printf("Enter a month: ");
    scanf("%d", &monthNumber);

    if(JANUARY == monthNumber){
        printf("%d is the first month of the year.", monthNumber);    }
    else {
        printf("%d is the first month of the year.", monthNumber);    }

    return 0;
}