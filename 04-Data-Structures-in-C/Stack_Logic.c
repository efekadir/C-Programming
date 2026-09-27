#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* nextPtr;
}Node;

int ask_data(){
    int new_data;
    printf("Enter your number: ");
    scanf("%d", &new_data);

    return new_data;
}

void show_data(Node* top){
    Node* currentPtr = top;

    if(currentPtr == NULL){
        printf("No data.");

        return;
    }

    do{
        printf("%d -> ", currentPtr -> data);
        currentPtr = currentPtr -> nextPtr;
    }while (currentPtr != NULL);

    printf("NULL");
}

void push(Node** top, int newData){
    Node* newPtr = malloc(sizeof(Node));

    if(newPtr == NULL){
        printf("Memory allocation failed.\n");

        return;
    }

    newPtr -> data = newData;

    if(*top == NULL){
        *top = newPtr;
        newPtr -> nextPtr = NULL;
        show_data(*top);
        
        return;
    }

    newPtr -> nextPtr = *top;
    *top = newPtr;

    show_data(*top);
}

void pop(Node** top){
    if(*top == NULL){
        printf("There is no any data to delete.");
        return;
    }

    if((*top) -> nextPtr == NULL){
        free(*top);
        *top = NULL;
        show_data(*top);
        return;
    }
    
    Node* temp = *top;
    *top = (*top) -> nextPtr;

    free(temp);

    show_data(*top);
}

int main(){
    Node* top = NULL;
    int option, new_data;

    while (1){
        printf("\n\nChoose option:\n1) Insert data\n2) Delete data\n3) Show data\n4) Exit\n");
        scanf("%d", &option);

        if(option == 1){
            new_data = ask_data();
            push(&top, new_data);
        }
        else if(option == 2){
            pop(&top);
        }
        else if(option == 3){ 
            show_data(top);
        }
        else if(option == 4){
            exit(0);
        }
        else{
            printf("Enter a valid number.\n");
        }
    }

    return 0;
}