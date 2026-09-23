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

void show_data(Node* head){
    Node* currentPtr = head;

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

void insert_data(Node** head, int newData){
    Node* newPtr = malloc(sizeof(Node));
    newPtr -> data = newData;
    newPtr -> nextPtr = NULL;

    if(*head == NULL){
        *head = newPtr;
        show_data(*head);
        
        return;
    }

    Node* currentPtr = *head;

    while (currentPtr -> nextPtr != NULL){
        currentPtr = currentPtr -> nextPtr;
    }

    currentPtr -> nextPtr = newPtr;

    show_data(*head);
}

void delete_data(Node** head){
    Node* currentPtr = *head;
    Node* previousPtr = NULL;

    if(currentPtr == NULL){
        printf("There is no any data to delete.");
        return;
    }

    if(currentPtr -> nextPtr == NULL){
        free(currentPtr);
        *head = NULL;
        show_data(*head);
        return;
    }

    while(currentPtr -> nextPtr != NULL){
        previousPtr = currentPtr;
        currentPtr = currentPtr -> nextPtr;
    }

    free(currentPtr);
    previousPtr -> nextPtr = NULL;

    show_data(*head);
}

int main(){
    Node* head = NULL;
    int option, new_data;

    while (1){
        printf("\n\nChoose option:\n1) Insert data\n2) Delete data\n3) Show datas\n4) Exit\n");
        scanf("%d", &option);

        if(option == 1){
            new_data = ask_data();
            insert_data(&head, new_data);
        }
        else if(option == 2){
            delete_data(&head);
        }
        else if(option == 3){ 
            show_data(head);
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