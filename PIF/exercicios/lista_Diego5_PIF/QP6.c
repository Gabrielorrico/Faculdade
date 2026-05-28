#include <stdio.h>
#include <stdlib.h>
/*6. Adicionar um Nó ao Final da Lista
Escreva a função void adiciona_final(struct node **head, int valor) que insere um novo nó com um valor no final da
lista. Se a lista estiver vazia, o novo nó se torna head.
Exemplo: head = 1 → 2 → NULL. Após adiciona_final(&head;, 3) → 1 → 2 → 3 → NULL
■ Dica: Se lista vazia, adicione no início. Caso contrário, percorra até o último nó (next == NULL) e conecte o novo.*/

typedef struct Node{
    int value;
    struct Node* next;
}node;

node* criar_no(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->value = valor;
    temp->next = NULL;
    return temp;
}

void add(node** head,int valor){
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

void listar(node* head){

    node* aux = head;

    if(head == NULL){
        return;
    }
    while(aux != NULL){
        printf("valor: [%d] endereco: [%p]",aux->value,aux->next);
        printf("\n");
        aux = aux->next;
    }
    
}
/*
void remove_pos(node** head,int valor){
    if(*head == NULL){
        printf("lista vazia")
    }else if(*head->next == NULL && valor > 0){
        printf("esse indice não existe na lista");
    }else{
        int cont = 0;
        node* aux = *head;
        node* anterior = *head;
        while(aux != NULL && cont != valor){
            cont++;
            anterior = aux
            aux = aux->next;
        }
        if(aux != NULL){
            aux->next = NULL;
            free(aux);
        }
    }
}
*/

/*
void inserirposi(node **head, int pos, int valor){
    node* novo = criar_no(valor);
    if(*head == NULL && pos > 0){
        printf("não é possível inserir nessa posição");
    }else if(*head == NULL){

    }else{
        int posicaoAtual = 0;
        node* aux = *head;
        node* anterior = *head;
        while(aux != NULL && posicaoAtual != posicaoAtual){
            posicaoAtual++;
            anterior = aux;
            aux = aux->next;
        }
        if(aux != NULL){
            anterior->next = novo;
            novo->next = aux;
        }else{
            printf("posição não encontrada")
        }

    }

}
*/

int main() {
    node *head = NULL;

    add(&head,10);
    add(&head,20);
    add(&head,30);
    add(&head,40);
    add(&head,50);
    add(&head,60);
    
    listar(head);
    
    return 0;
}