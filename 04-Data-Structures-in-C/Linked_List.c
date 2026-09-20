#include <stdio.h>

typedef struct Node{
    int data;
    struct Node* nextPtr;
}Node;

int ask_data(){
    int new_data;
    printf("Enter your number:");
    scanf("%d", &new_data);

    return new_data;
}

void insert_data(Node* head, int data){

}

int main(){
    Node* head = NULL;
    int new_data = ask_data();
    insert_data(head, new_data);

    return 0;
}