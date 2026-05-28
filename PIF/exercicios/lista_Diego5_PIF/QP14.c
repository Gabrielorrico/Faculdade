#include <stdlib.h>
#include <stdio.h>

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

int tem_ciclo(node *head){

    if(head == NULL){
        printf("lista vazia");
    }

    node* lento = head;
    node* rapido = head;

    while (rapido != NULL && rapido->next != NULL){
        lento = lento->next;
        rapido =  rapido->next->next;

        if(rapido == lento){
            return 1;
        }
    }
    return 0;

}

void imprimir(node* head){


    if(head == NULL){
        printf("lista vazia");
    }else{
        node* aux = head;
        while (aux != NULL){
            printf("%d ", aux->valor);
        }
    }
}

int main(){

    node* head = NULL;


    add(&head,10);
    add(&head,20);
    add(&head,30);
    add(&head,40);
    add(&head,50);
    add(&head,60);

    int Naotem = tem_ciclo(head);
    printf("%d",Naotem);

    int contador = 0;
    node* aux = head;
    node* temp = NULL;

    while (aux->next != NULL){

        contador++;
        aux = aux->next;

        if(contador == 3){
            temp = aux;
        }


    }
    aux->next = temp;

    int tem = tem_ciclo(head);
    printf("%d",tem);
    

    return 0;
}