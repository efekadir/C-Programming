#include <stdio.h>
#include <string.h>
#define SIZE 50

void letterCounter(char text[], int n){
    int i, currentLetterAmount = 1;

    if(n == 0){
        return;
    }
    
    for(i = 0; i < n - 1; i++){
        if(text[i] == text[i + 1]){
            currentLetterAmount++;
        }
        else{
            printf("%d%c", currentLetterAmount, text[i]);
            currentLetterAmount = 1;
        }
    }
    printf("%d%c", currentLetterAmount, text[n - 1]);
}
int main(){
    char text[SIZE];

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = 0;

    letterCounter(text, strlen(text));

    return 0;
}
