#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node* next;
}node;

void adiciona_inicio(node** head, int valor){
    node *novo = (node *)malloc(sizeof(node));
    if(novo == NULL){
        return;
    }

    novo->valor = valor;
    novo->next = *head;

    *head = novo;
}

int main(){
    node* head = NULL;

    adiciona_inicio(&head,10);

    printf("%d", (head)->valor);
    
    return 0;
}