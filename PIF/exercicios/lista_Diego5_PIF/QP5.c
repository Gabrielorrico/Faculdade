#include <stdio.h>
#include <stdlib.h>
/*5. Buscar um Valor na Lista
Implemente struct node* busca(struct node *head, int valor) que busca um nó com um valor específico e retorna um
ponteiro para ele, ou NULL se não encontrar.
Exemplo: Lista: 5 → 10 → 15 → NULL. busca(head, 10) retorna ponteiro para o nó com 10.
■ Dica: Percorra a lista e compare *aux->valor com o valor procurado.*/
typedef struct Node{
    int value;
    struct Node* next;
}node;

node *criar_no(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->value = valor;
    temp->next = NULL;
    return temp;
}

void add(node** head,int valor){
    node *novo = criar_no(valor);

    if(*head == NULL){
        *head = novo;
    }else{
        node* aux = *head;
        while (aux->next != NULL ){
            aux = aux->next;
        }
        aux->next = novo;  
    }
}

node *busca(node* head,int valorachar){
    node* aux = head;

    while (aux->next != NULL){
        if(aux->value == valorachar){
            return aux -> next;
        }
        aux = aux->next;
    }
    return NULL;
    
}

void listar(node* head){

    node* aux = head;

    if(head == NULL){
        return;
    }
    while(aux != NULL){
        printf("valor: [%d] endereço: [%p]",aux->value,aux->next);
        printf("\n");
        aux = aux->next;
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

    listar(head);

    node *resultado = busca(head,40);
    printf("o valor está no endereço: %p",resultado);
    
    return 0;
}