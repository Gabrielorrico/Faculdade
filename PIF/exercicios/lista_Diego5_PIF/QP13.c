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

node* intercala(node* h1,node* h2){

    node* h = criar_no(h1->valor);
    node* aux = h;
    h1 = h1->next;

    // 1 3 5
    // 2 4 6
    // 1 2 3 4 5 6

    while (h1 != NULL || h2 != NULL){
        
        if(h2 != NULL){
            aux->next = criar_no(h2->valor);
            aux = aux->next;
            h2 = h2->next;
        }

        if(h1 != NULL){
            aux->next = criar_no(h1->valor);
            aux = aux->next;
            h1 = h1->next;
        }
        
    }
    return h;
    
}

void imprimir(node* head){

    if(head == NULL){
        printf("Lista vazia");
    }else{
        node* aux = head;
        while (aux != NULL){
            printf("%d ", aux->valor);
            aux = aux->next;
        }
    } 
}

int main(){

    node* head1 = NULL;
    node* head2 = NULL;

    add(&head1, 10);
    add(&head1, 30);
    add(&head1, 50);
    
    add(&head2, 20);
    add(&head2, 40);
    add(&head2, 60);
    add(&head2, 70);

    imprimir(head1);
    printf("\n");
    imprimir(head2);
    printf("\n");

    node* resultado = intercala(head1, head2);

    printf("\n");
    imprimir(resultado);
    

    return 0;
}