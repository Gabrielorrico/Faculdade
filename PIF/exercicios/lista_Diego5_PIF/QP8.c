#include <stdio.h>
#include <stdlib.h>
/*8. Remover o Último Nó da Lista
Crie void remove_ultimo(struct node **head) que remove e libera o último nó. Trate especialmente o caso de lista
com um único nó.
Exemplo: head = 10 → 20 → 30 → NULL. Após remove_ultimo(&head;) → 10 → 20 → NULL
■ Dica: Se um nó, libere head e faça *head = NULL. Caso contrário, percorra até o penúltimo e desconecte o último.*/
typedef struct Node{
    int value;
    struct Node* next;
}node;

node* criarNo(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->value = valor;
    temp->next = NULL;
    return temp;
}

void add(node** head, int valor){
    node* novo = criarNo(valor);

    if(*head == NULL){
        *head = novo;

    }else{
        node* aux = *head;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = novo;
    }
}

void listar(node *head){
    if(head == NULL){
        printf("lista vazia");
    }else{
        node* aux = head;
        while (aux != NULL){
            printf("endereco: [%p] || valor: [%d]", aux->next, aux->value);
            aux = aux->next;
            printf("\n");
        }
        
    }
}

void remove_ultimo(node **head){
    if(*head == NULL){
        printf("lista vazia");
    }else if((*head)->next == NULL){

        free(*head);

        *head = NULL;

    }else{
        node* aux = *head;
        node* anterior = *head;

        while (aux->next != NULL){
            anterior = aux;
            aux = aux->next;
        }

        anterior->next = NULL;
        free(aux);
        
    }

}


int main() {

    node* head = NULL;

    add(&head,10);
    add(&head,20);
    add(&head,30);
    add(&head,40);
    add(&head,50);
    add(&head,60);

    printf("\nantes de remover o ultimo\n");
    listar(head);

    remove_ultimo(&head);
    printf("\ndepois de remover o ultimo\n");
    listar(head);
    
    return 0;
}