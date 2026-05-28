#include <stdio.h>
#include <stdlib.h>
/* 10. Liberar Toda a Memória da Lista
Escreva void libera_lista(struct node **head) que percorre a lista e libera a memória alocada para cada nó com free().
Ao final, defina *head = NULL.
Exemplo: Após libera_lista(&head;), toda memória é liberada e head aponta para NULL.
■ Dica: Enquanto head != NULL, salve o próximo, libere o atual e avance para o próximo. */
typedef struct Node{
    int value; 
    struct Node* next;
}node;

node* create_no(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->value = valor;
    temp->next = NULL;
    return temp;
}

void add(node** head, int valor){
    node* novo = create_no(valor);

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
    if(head == NULL){
        printf("lista vazia");
    }else{
        node* aux = head;
        while (aux != NULL){
            printf("Endereco: [%p] Valor: [%d]",aux,aux->value);
            printf("\n");
            aux = aux->next;
        }   
    }
}

void libera_lista(node **head){

    if(*head == NULL){
        printf("lista vazia");
    }else{
        node* aux = *head;
        node* proximo = *head;

        while (aux->next != NULL){

            proximo = aux->next;
            free(aux);
            aux = proximo;
        }

        free(proximo);
        *head = NULL;
        
    }

}



int main() {

    node* head = NULL;

    add(&head,20);
    add(&head,20);
    add(&head,30);
    add(&head,420);
    add(&head,50);

    printf("antes de apagar a lista:\n");

    listar(head);

    printf("\ndepois de apagar a lista:\n");

    libera_lista(&head);
    listar(head);
    
    return 0;
}