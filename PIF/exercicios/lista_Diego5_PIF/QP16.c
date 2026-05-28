#include <stdio.h>
#include <stdlib.h>

/* 16. Ordenar Lista com Bubble Sort
Escreva void ordena_lista(struct node **head) que ordena a lista em ordem crescente usando Bubble Sort, trocando
valores entre nós (não apontadores).
Exemplo: Lista: 5 → 2 → 8 → 1 → NULL. Após ordena_lista(&head;) → 1 → 2 → 5 → 8 → NULL
■ Dica: Use um laço externo e interno. Quando encontrar dois nós fora de ordem, troque seus valores com uma variável
auxiliar. */
typedef struct Node{
    int valor;
    struct Node* next;
}node;

node* criarNode(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->valor = valor;
    temp->next = NULL;
    return temp;
}

void add(node** head, int valor){

    node* novo = criarNode(valor);

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

void ordena_lista(node** head){

    if(*head == NULL){
        printf("lista vazia");

    }else if((*head)->next == NULL){
        printf("a lista tem apenas um elemento");

    }else{
        
        int temTroca = 1;
        
        while (temTroca){
            temTroca = 0;
            node* atual = *head;
            node* proximo = (*head)->next;

            while(atual != NULL && atual->next != NULL){
                int temp = 0;
                if(atual->valor > proximo->valor){
                    temp = atual->valor;
                    atual->valor = proximo->valor;
                    proximo->valor = temp;
                    temTroca = 1;
                }
                atual = atual->next;
                proximo = atual->next;
            }
            
        }
    }
}

void imprimir(node* head){
    if(head == NULL){
        printf("lista vazia");
    }else{
        node* aux = head;
        while (aux != NULL){
            printf("%d ",aux->valor);
            aux = aux->next;
        }
        
    }
}

int main() {
    node* head = NULL;

    add(&head,20);
    add(&head,10);
    add(&head,50);
    add(&head,40);
    add(&head,30);

    imprimir(head);
    printf("\n");
    ordena_lista(&head);
    printf("\n");
    imprimir(head);

    
    return 0;
}