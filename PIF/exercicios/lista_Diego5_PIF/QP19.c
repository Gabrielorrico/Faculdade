/* 19. Copiar Lista (Cópia Profunda)
Implemente struct node* copia_lista(struct node *head) que cria uma cópia completa e independente da lista original,
alocando novos nós.
Exemplo: Original: 1 → 2 → 3 → NULL. Retorna nova lista: 1 → 2 → 3 → NULL (nós diferentes)
■ Dica: Crie um novo nó para cada nó da original. Conecte-os e retorne o head da cópia. */

#include <stdio.h>
#include <stdlib.h>

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

void add(node** head,int valor){
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

node* copia_lista(node* head){
    node* saida = criarNode(head->valor);
    node* aux2 = saida;
    node* aux = head->next;
    
    while (aux != NULL){
        //add(&saida,aux->valor);
        aux2->next = criarNode(aux->valor);
        aux2 = aux2->next;
        aux = aux->next;
    }
    aux2->next = NULL;
    
    return saida;
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

    imprimir(head);

    node* h2 = copia_lista(head);
    printf("\n");
    imprimir(h2);
    
    return 0;
}