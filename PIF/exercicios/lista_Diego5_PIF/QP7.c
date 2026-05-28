#include <stdio.h>
#include <stdlib.h>
/*7. Remover o Primeiro Nó da Lista
Implemente void remove_primeiro(struct node **head) que remove e libera o primeiro nó da lista. Head deve apontar
para o segundo nó (ou NULL se havia apenas um).
Exemplo: head = 10 → 20 → 30 → NULL. Após remove_primeiro(&head;) → 20 → 30 → NULL
■ Dica: Salve o head atual em um temporário, faça *head apontar para head->next, depois free(temp).*/

typedef struct Node{
    int value;
    struct Node* next; 
}node;

node *create_no(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->value = valor;
    temp->next = NULL;
    return temp;
}

void add(node **head,int valor){
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

void remove_primeiro(node **head){
    node* temp = *head;

    *head = temp->next;

    temp->next = NULL;

    free(temp);

}

void listar(node *head){
    node* aux = head;
    if(head == NULL){
        printf("lista esta vazia");
    }else{
        while (aux != NULL){
            printf("valor: [%d] endereco: [%p]",aux->value, aux->next);
            aux = aux->next;
            printf("\n");
            
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

    listar(head);

    remove_primeiro(&head);

    listar(head);

    
    return 0;
}