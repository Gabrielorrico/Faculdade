/* 17. Remover o Nó do Meio da Lista

Implemente void remove_meio(struct node **head) que localiza e remove o nó do meio da lista, liberando sua
memória. Retorna void.
Exemplo: Lista: 1 → 2 → 3 → 4 → 5 → NULL. Remove o 3 → 1 → 2 → 4 → 5 → NULL
■ Dica: Use Floyd's Algorithm (dois ponteiros com velocidades diferentes) para encontrar o nó anterior ao meio e
desconectá-lo. */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node* next;

}node;

node* criarNo(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->valor = valor;
    temp->next = NULL;
    return temp;
}

void add(node** head, int valor){
    node* novo = criarNo(valor);

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

void remove_meio(node** head){
    
    node* lento = *head;
    node* rapido = *head;
    node* anterior = NULL;
    
    while (rapido != NULL && rapido->next != NULL){
        rapido = rapido->next;

        if(rapido->next == NULL){
            anterior->next = lento->next;
            free(lento);
        }
        rapido = rapido->next;
        anterior = lento;
        lento = lento->next;
    }
    anterior->next = lento->next;
    free(lento);

    
}

void imprimir(node* head){
    if(head == NULL){
        printf("lista vazia");
    }else{
        node* aux = head;
        while (aux != NULL){
            printf("%d ", aux->valor); 
            aux = aux->next;           
        }
        
    }
}

int main() {

    node* head = NULL;

    add(&head,10);
    add(&head,20);
    add(&head,30);
    add(&head,40);
    add(&head,50);
    add(&head,50);

    imprimir(head);
    printf("\n");

    remove_meio(&head);
    imprimir(head);
    
    return 0;
}