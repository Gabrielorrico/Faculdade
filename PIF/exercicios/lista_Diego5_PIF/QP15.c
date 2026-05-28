#include <stdio.h>
#include <stdlib.h>

/* 15. Encontrar o Nó do Meio da Lista
Implemente struct node* encontra_meio(struct node *head) que retorna um ponteiro para o nó do meio da lista. Se
houver um número par de nós, retorne o primeiro do par central.
Exemplo: Lista: 1 → 2 → 3 → 4 → 5 → NULL. Retorna ponteiro para o nó 3. Para par: 1 → 2 → 3 → 4 → NULL retorna
2.
■ Dica: Use dois ponteiros, um avança 1 nó, outro avança 2 nós. Quando o rápido chegar ao fim, lento está no meio. */


typedef struct Node {
    int valor;
    struct Node* next;
}node;

node* criaNode(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->valor = valor;
    temp->next = NULL;
    return temp;
}

void add(node** head, int valor){
    node* novo = criaNode(valor);

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

node* encontraMeio(node* head){
    
    if(head == NULL){
        printf("lista vazia");
        return NULL;
    }else{
        node* lento = head;
        node* rapido = head;

        while (rapido != NULL && rapido->next != NULL){
            rapido = rapido->next;

            if(rapido->next == NULL){
                return lento;
            }
            
            lento = lento->next;
            rapido = rapido->next;
        }
        return lento;
    }
}

void imprimir(node* head){
    if(head == NULL){
        printf("lista vazia");
    }else{
        node* aux =  head;
        while (aux != NULL){
            printf("%d ",aux->valor);
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

    imprimir(head);
    printf("\n");

    node* resultado = encontraMeio(head);
    printf("%d",resultado->valor);


    
    return 0;
}