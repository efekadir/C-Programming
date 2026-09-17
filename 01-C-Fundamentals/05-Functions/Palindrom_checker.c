#include <stdio.h>
#include <string.h>
#define SIZE 50

int palindromeChecker(char *text, int n){
    int i;

    for(i = 0; i < (n / 2); i++){
        if(text[i] != text[(n - 1) - i]){
            return 0;
        }
    }

    return 1;
}
int main(){
    char text[50];
    int isPalindrome;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = 0;
    isPalindrome = palindromeChecker(text, strlen(text));

    if(isPalindrome){
        printf("%s is palindrome.", text);
    }
    else{
        printf("%s is not palindrome.", text);

    }

    return 0;
}
