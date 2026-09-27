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

void show_data(Node* front){
    Node* currentPtr = front;

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

void enqueue(Node** front, Node** rear, int newData){
    Node* newPtr = malloc(sizeof(Node));

    if(newPtr == NULL){
        printf("Memory allocation failed.\n");
        
        return;
    }

    newPtr -> data = newData;
    newPtr -> nextPtr = NULL;

    if(*front == NULL){
        *front = newPtr;
        *rear = *front;
        show_data(*front);
        
        return;
    }

    (*rear) -> nextPtr = newPtr;
    *rear = (*rear) -> nextPtr;

    show_data(*front);
}

void dequeue(Node** front, Node** rear){
    if(*front == NULL){
        printf("There is no any data to delete.");
        return;
    }
    
    Node* temp = *front;
    *front = (*front) -> nextPtr;
    free(temp);

    if(*front == NULL){
        *rear = NULL;
    }

    show_data(*front);
}

void peek(Node* front){
    if(front == NULL){
        printf("No data.");

        return;
    }
    
    printf("The first data is: %d", front -> data);
}

int main(){
    Node* front = NULL;
    Node* rear = NULL;
    int option, new_data;

    while (1){
        printf("\n\nChoose option:\n1) Insert data\n2) Delete data\n3) Show data\n4) Peek data\n5) Exit\n");        scanf("%d", &option);

        if(option == 1){
            new_data = ask_data();
            enqueue(&front, &rear, new_data);
        }
        else if(option == 2){
            dequeue(&front, &rear);
        }
        else if(option == 3){ 
            show_data(front);
        }
        else if(option == 4){ 
            peek(front);
        }
        else if(option == 5){
            exit(0);
        }
        else{
            printf("Enter a valid number.\n");
        }
    }

    return 0;
}