#include <stdio.h>
#include <stdlib.h>

/* 11. Remover um Nó Específico pelo Valor
Implemente void remove_valor(struct node **head, int valor) que remove a primeira ocorrência de um nó com um
valor específico. Se não encontrar, não faça nada. Trate o caso de remover o head.
Exemplo: Lista: 10 → 20 → 30 → 20 → NULL. remove_valor(&head;, 20) remove apenas a primeira ocorrência → 10 →
30 → 20 → NULL
■ Dica: Use um ponteiro anterior para poder desconectar o nó. Se remove head, use **head diretamente. */

typedef struct Node{
    int valor;
    struct Node* next;
}node;

node* create_no(int valor){
    node* temp = (node *)malloc(sizeof(node));
    temp->valor = valor;
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

void remove_valor(struct node **head, int valor){
    node* aux = *head;
    
    if(*head == NULL){
        printf("não existem valores para serem apagados!");
        return;

    }else if(aux->next == NULL  && aux->valor == valor){
        free(*head);
        *head = NULL;

    }else{
        node* anterior = NULL;

        while (aux != NULL){
            if(aux->valor == valor){
                if(anterior == NULL){
                    *head = aux->next;
                    free(aux);
                    return;
                }else{
                    anterior->next = aux->next;
                    free(aux);
                    return;
                }
            }
            anterior = aux;
            aux = aux->next;
        }
        
    }
}

void inserirInicio(node** head, int valor){
    node* novo = create_no;
    node* aux = *head;
    *head = novo;
    novo->next = aux;
}

/* void inserirOrdenado(node** head, int valor){
    node* novo = create_no(valor);
    if( *head == NULL || valor < (*head)->valor ){
        novo->next = *head;
        *head = novo;
    }else {
        node* aux = *head;
        node* anterior = *head;

        while (aux != NULL && aux->valor < valor){
            anterior = aux;
            aux = aux->next;
        }
        anterior->next = novo;
        novo->next = aux;     
    }
} */

/* node *intercala(node* head1, node* head2){

    //crio node head e depois digo que ele recebe o primeiro valor da lista 1
    node* head = NULL;
    head = create_no(head1->valor);
    node* aux = head;

    //crio uma aux para head 1 e logo depois ando uma casa pois ela ja foi adicionada
    node* aux1 = head1;
    aux1 = aux->next;

    //crio uma aux para o head 2
    node* aux2 = head2;

    while (aux1->next != NULL || aux2->next != NULL){
        if(aux2 != NULL){
        
            aux->next = create_no(head1->valor);
            aux = aux->next;
            head2 = head2->next;
            head1 = head1->next
        }

    }   
} */

/* node *intercala(node* head1, node* head2){

    node* head = NULL;
    head = create_no(head1->valor);
    head1 = head1->next
    node* aux = head;

    while (head1->next != NULL || head2->next != NULL){
        if(head2 != NULL){
            aux->next = create_no(head2->valor);
            aux = aux->next;
            head2 = head2->next;
            head1 = head1->next
        }    
    }   
} */

int main() {

    node* head1 = NULL;
    node* head2 = NULL;
    node* head3 = NULL;

    add(&head1,10);
    add(&head1,30);
    add(&head1,50);
   
   

    add(&head2,20);
    add(&head2,40);
    add(&head2,60);
    
  
    
    return 0;
}