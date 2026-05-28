#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int valor;
    struct Node *next;
}node;

node *creatNode(int valordousuario){
    node *temp = (node *)malloc(sizeof(node));
    temp->valor = valordousuario;
    temp->next = NULL;
    //retorna o endereço do que a gente acabou de criar
    return temp;
}

//O tipo da variavel é node* e preciso pegar o conteudo do endereço de memoria de Head (*head) logo precisa ser **;
void *add(node **h,int valor){
    node* novo = creatNode(valor);
    //é tipo um macro, serve para substituir createNode por novo 
    if(*h == NULL){
        *h = novo;
    } else{
        node *aux = *h;
        while (aux->next != NULL){
            aux = aux->next;
        }
        aux->next = novo;
    }
}

void imprimir(node* h){
    if(h == NULL){
        printf("Lista vazia.");
    }else{
        node* aux = h;
        while(aux != NULL){
            printf("%d", aux->valor);
            aux = aux->next;
        }
    }
    printf("next");
}

void removeUltimo(node** h){
    if(*h == NULL){
        printf("Lista vazia\n");
    }else if((*h)->next == NULL){
        free(*h);
        *h = NULL;
    }else{
        node* aux = *h;
        while (aux->next->next != NULL){
            aux = aux->next;
        }
        free(aux->next);
        aux->next =NULL;


        

        /*
        node* aux = *h;
        node* x = *h;
        while (aux->next != NULL){
            x = aux;
            aux = aux->next;
        }
        free(aux);
        x->next =NULL;
        */
        
    }
}

int main() {
    node *head = NULL;

    add(&head, 10);
    add(&head, 20);
    add(&head, 30);
    add(&head, 40);
    add(&head, 50);
    add(&head, 60);

    imrimir(head);

    removeUltimo(&head);

    imprimir(head);
    
    return 0;
}