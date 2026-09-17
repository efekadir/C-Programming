#include <stdio.h>

int main(){
    char string[55] = "ice man was a nice man now i am cold";
    int letterAmount[26] = {0};
    
    char *stringPtr = string;
    int *letterAmountPtr = letterAmount;
    char c = 'a';
    for(; *stringPtr; ++stringPtr){
        if(*stringPtr >= 'a' && *stringPtr <= 'z'){
            letterAmount[*stringPtr - 'a']++;
        }
    }
   for(; letterAmountPtr < letterAmount + 26; ++letterAmountPtr){
        printf("%c: %d\n", c, *letterAmountPtr);
        c++;
    }

    return 0;
}