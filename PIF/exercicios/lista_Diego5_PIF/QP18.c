/* 18. Soma de Todos os Valores (Recursivo)
Crie int soma_recursivo(struct node *head) que calcula a soma de todos os valores da lista de forma recursiva (sem
laços).
Exemplo: Lista: 10 → 5 → 3 → NULL. Retorna 18 (10 + 5 + 3)
■ Dica: Caso base: se head == NULL, retorne 0. Caso recursivo: retorne head->valor + soma_recursivo(head->next). */

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

void add(node** head,int valor){
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

int soma_recursivo(node *head){

    if(head == NULL){
        return 0;
    }else{
        node* aux = head;
        int soma = 0;
        while (aux != NULL){
            soma += aux->valor;
            aux = aux->next;
        }
        return soma;
    }

} 

/* int soma_recursivo(node *head){

    if(head == NULL){
        return 0;
    }else{
        return head->valor + soma_recursivo(head->next);
    }

} */



int main() {

    node* head = NULL;

    add(&head,1);
    add(&head,1);
    add(&head,1);
    add(&head,1);

    int resultado = soma_recursivo(head);
    printf("%d", resultado);
    
    return 0;
}