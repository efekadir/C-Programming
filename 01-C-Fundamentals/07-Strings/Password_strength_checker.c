#include <stdio.h>
#include <string.h>

void instructions(){
    printf("Welcome to the Password Strength Checker.\n");
    printf("A strong password should have:\n");
    printf("1) At least 8 characters,\n");
    printf("2) At least 1 uppercase letter,\n");
    printf("3) At least 1 lowercase letter,\n");
    printf("4) At least 1 digit,\n");
    printf("5) At least 1 special character.\n\n");
}

void passwordStrength(int strengthPoint){
    if(strengthPoint <= 2){
        printf("\nStrength: Weak");
    }
    else if(strengthPoint <= 4){
        printf("\nStrength: Medium");
    }
    else if(strengthPoint == 5){
        printf("\nStrength: Strong");
    }
}

int main(){
    char password[100];
    int i, length, strengthPoint = 0;

    instructions();

    printf("Enter a password: \n");
    scanf("%99s", password);

    printf("--------------------------------\n");


    length = strlen(password);

    if(length >= 8){
        strengthPoint++;
    }
    else{
        printf("Too short.\n");
    }
        
    for(i = 0; i < length; i++){
        if('A' <= password[i] && password[i] <= 'Z'){
            strengthPoint++;
            break;
        }
        if(i == length - 1){
            printf("Uppercase missing.\n");
        }
    }

    for(i = 0; i < length; i++){
        if('a' <= password[i] && password[i] <= 'z'){
            strengthPoint++;
            break;
        }
        if(i == length - 1){
            printf("Lowercase missing.\n");
        }
    }

    for(i = 0; i < length; i++){
        if('0' <= password[i] && password[i] <= '9'){
            strengthPoint++;
            break;
        }
        if(i == length - 1){
            printf("Digit missing.\n");
        }
    }

    if(strpbrk(password, "!@#$^&*()_+-=?.,") != NULL){
        strengthPoint++;
    }
    else{
        printf("Special character missing.\n");
    }

    passwordStrength(strengthPoint);

    return 0;
}
