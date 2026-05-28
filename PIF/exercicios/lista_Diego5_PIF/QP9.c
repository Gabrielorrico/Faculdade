#include <stdio.h>
#include <stdlib.h>

/*9. Encontrar o Maior Valor da Lista
Implemente int maior_valor(struct node *head) que retorna o maior valor armazenado na lista. Se a lista estiver vazia,
retorne um valor sentinela (como INT_MIN ou -999999).
Exemplo: Lista: 15 → 5 → 30 → 10 → NULL → retorna 30
■ Dica: Inicialize maximo com o valor do primeiro nó, depois compare com todos os demais.*/

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

int maior_valor(node *head){

    if(head == NULL){
        return -99999;
    }else{
        node* aux = head;
        int maior = aux->value;
        while(aux != NULL){
            if(maior < aux->value){
                maior = aux->value;
            }
            aux = aux->next;
        }
        return maior;
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

int main() {
    
    node* head = NULL;

    add(&head,20);
    add(&head,20);
    add(&head,30);
    add(&head,420);
    add(&head,50);

    listar(head);

    int maior_lista = maior_valor(head);
    printf("\nO maior valor da lista é: [%d]",maior_lista);


    
    return 0;
}