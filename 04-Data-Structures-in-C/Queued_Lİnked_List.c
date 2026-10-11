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

    printf("NULL\n");
}

void insert_data(Node** head, int data){
    Node* newPtr = malloc(sizeof(Node));
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

int delete_data(Node** head){
    while (1){
        printf("Enter a data to delete: ");
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