#include <stdio.h>
#include <stdlib.h>

/* 12. Inverter a Ordem da Lista
Crie a função void inverte_lista(struct node **head) que reverte a ordem dos nós invertendo os apontadores next. A
operação é in-place.
Exemplo: Lista: 1 → 2 → 3 → NULL. Após inverte_lista(&head;) → 3 → 2 → 1 → NULL
■ Dica: Use três ponteiros: anterior, atual e próximo. Inverta o apontador a cada passo: atual->next = anterior. */

typedef struct Node{
    int valor;
    struct Node* next;
}node;

node* criar_no(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->valor = valor;
    temp->next = NULL;
    return temp;
}

void add(node** head, int valor){
    node* novo = criar_no(valor);

    if(*head == NULL){
        *head = novo;
    }else{
        node* aux = *head;
        while (aux->next != NULL){
            aux = aux->next;
        }
        aux->next = novo;
    }
}

void inverte_lista(node** head){
    
    if(*head == NULL){
        printf("lista vazia");
    }else if((*head)->next == NULL){
        
        printf("a lista tem apenas um elemento");
        printf("%d",(*head)->valor);
        
    }else{
        node* anterior = NULL;
        node* atual = *head;
        node* proximo = NULL;
        
        while (atual != NULL){
            proximo = atual->next;
            atual->next = anterior;
            anterior = atual;
            atual = proximo;
        }
        *head = anterior;
    } 
}

void imprimir(node *head){
    node* atual = head;

    if(head == NULL){
        printf("lista vazia");
        return;
    }else{
        while (atual != NULL ){
            printf("%d ", atual->valor);
            atual = atual->next;
        }
    }
}

int main() {

    node* head = NULL;

    add(&head,10);
    add(&head,20);
    add(&head,30);
    add(&head,40); 

    imprimir(head);

    inverte_lista(&head);

    printf("\n");
    imprimir(head);
    
    
    return 0;
}