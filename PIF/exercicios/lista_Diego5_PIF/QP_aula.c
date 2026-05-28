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

void inserirFinal(node** head, int valor){
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

void inserirInicio(node** head, int valor){
    node* novo = criar_no(valor);
    node* aux = *head;
    *head = novo;
    novo->next = aux;
}

void removeDuplicados (node** head){
    if(*head == NULL){
        printf("lista vazia");

    }else if((*head)->next == NULL) {

        printf("sua lista tem apenas um elemento");

    }else{

        node* aux = *head;

        while (aux != NULL){

            node* aux2 = aux->next;
            node* anterior = aux;

            while (aux2 != NULL){
                if(aux->valor == aux2->valor){

                    anterior->next = aux2->next;
                    free(aux2);

                    aux2 = anterior->next;
                }else{
                    anterior = aux2;
                    aux2 = aux2->next;
                }
            }
            aux = aux->next;
        }
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
    char escolha;

    while (escolha != 'T'){

        printf("Escolha F, I ou T: ");
        scanf(" %c",&escolha);

        if(escolha == 'F'){

            int valorAdd;
            printf("digite o valor que deseja add:");
            scanf(" %d", &valorAdd);
            inserirFinal(&head,valorAdd);

        }else if(escolha == 'I'){

            int valorAdd;
            printf("digite o valor que deseja add: ");
            scanf(" %d", &valorAdd);
            inserirInicio(&head,valorAdd);

        }else if(escolha == 'T'){
            break;

        }else{

            printf("valor invalido, tente novamete");

        }
    }

    imprimir(head);

    removeDuplicados(&head);

    printf("\n");

    imprimir(head);
        
    return 0;
}