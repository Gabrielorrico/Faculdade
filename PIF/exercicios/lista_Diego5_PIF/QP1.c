#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node* next;
}node;

void inicializa_lista(node** head){
    *head = NULL;

}

int main(){
    node* head = NULL;
    inicializa_lista(&head);
    
    return 0;
}