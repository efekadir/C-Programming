#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    struct Node *nextPtr;
    int data;
}Node;

int ask_data(){
    int new_data;
    printf("Enter your number: ");
    scanf("%d", &new_data);

    return new_data;
}

void show_data(Node* head){
    if(head == NULL){
        printf("No data.");

        return;
    }

    Node* currentPtr = head;

    do{
        printf("%d -> ", currentPtr -> data);
        currentPtr = currentPtr -> nextPtr;
    }while(currentPtr != NULL);

    printf("NULL\n\n");
}

void insert_data(Node** head, int data){
    Node* newPtr = malloc(sizeof(Node));

    if(newPtr == NULL){
        printf("Memory could not allocate.");

        return;
    }

    newPtr -> data = data;
    newPtr -> nextPtr = NULL;

    if(*head == NULL){
        *head = newPtr;
        show_data(*head);

        return;
    }

    if((*head) -> data >= data){
        newPtr -> nextPtr = *head;
        *head = newPtr;
        show_data(*head);

        return;
    }
    
    Node* currentPtr = *head;
    Node* previousPtr = NULL;

    while(currentPtr != NULL && currentPtr -> data < data){
        previousPtr = currentPtr;
        currentPtr = currentPtr -> nextPtr;
    }

    previousPtr -> nextPtr = newPtr;
    newPtr -> nextPtr = currentPtr;

    show_data(*head);
}

void delete_data(Node** head){
    int delete_data;

    if(*head == NULL){
        printf("No data to delete.\n\n");

        return;
    }

    printf("Enter a data to delete: ");
    scanf("%d", &delete_data);

    if((*head) -> data == delete_data){
        Node* temp = *head;
        *head = (*head) -> nextPtr;
        free(temp);
        show_data(*head);

        return;
    }

    Node* currentPtr = *head;
    Node* previousPtr = NULL;

    while(currentPtr != NULL && currentPtr -> data != delete_data){
        previousPtr = currentPtr;
        currentPtr = currentPtr -> nextPtr;
    }

    if(currentPtr == NULL){
        printf("Data could not find.\n\n");

        return;
    }

    if(currentPtr -> data == delete_data){
        Node* temp = currentPtr;
        currentPtr = currentPtr -> nextPtr;
        previousPtr -> nextPtr = currentPtr;
        free(temp);
        show_data(*head);
    }
}

int main(){
    Node* head = NULL;
    int option, data;

    while(1){
        printf("Choose an option: \n1) Insert data\n2) Delete data\n3) Show data\n4) Exit\n");
        scanf("%d", &option);

        if(option == 1){
            data = ask_data();
            insert_data(&head, data);
        }
        else if(option == 2){
            delete_data(&head);
        }
        else if(option == 3){
            show_data(head);
        }
        else{
            exit(1);
        }
    }

    return 0;
}