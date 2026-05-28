/* 20. Lista Telefônica Completa com Busca, Inserção e Remoção
Implemente uma lista telefônica usando listas encadeadas. Crie struct com campos nome (char[100]) e telefone
(char[20]). Implemente: void insere_contato(struct contato **head, char *nome, char *tel) (em ordem alfabética),
struct contato* busca_contato(struct contato *head, char *nome), void exibe_contatos(struct contato *head) e
void remove_contato(struct contato **head, char *nome).

Exemplo: Insira 'Alice' e 'Bob' → lista em ordem. Busque 'Bob' → retorna nó. Remova 'Alice' → lista atualizada.
■ Dica: Use strcmp() para comparação. Insira em posição correta mantendo ordem. Remova sem duplicar e libere
memória. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    char nome[100];
    char telefone[20];
    struct Node* next;
}node;

node* criarNo(char *nome, char *telefone){
    node* temp = (node *)malloc(sizeof(node));

    strcpy(temp->nome, nome);
    strcpy(temp->telefone, telefone);
    temp->next = NULL;
    return temp;
}


void insere_contato(node **head, char *nome, char *telefone){
    node* novo = criarNo(nome,telefone);

    if(*head == NULL || strcmp(nome,(*head)->nome) < 0 ){
        novo->next = *head;
        *head = novo;
        return;
    }

    node* aux = *head;
    while (aux->next != NULL && strcmp(novo->nome,aux->next->nome) > 0 ){
        aux = aux->next;
    }
    novo->next = aux->next;
    aux->next = novo;  

}

node* busca_contato(node *head, char *nome){

    node* aux = head;
    while (aux != NULL){
        if(aux->nome == nome){
            return aux;
        }
        aux = aux->next;
    }
    printf("nenhum item encontrado na lista");
    return NULL;



    
}

void imprimir(node *head){

    if(head == NULL){
        printf("lista vazia");
        return;
    }else{
        node* aux = head;
        while (aux!=NULL){
            printf("nome: %s telefone: %s ", aux->nome, aux->telefone);
            printf("\n");
            aux = aux->next;
        }
        
    }

}

void remove_contato(node **head, char *nome){
    
    node *aux = *head;

    if(*head == NULL){
        printf("lista vazia");

    }else if((*head)->next == NULL){

        if(aux->nome == nome){
            free(aux);
        }else{
            printf("esse nome não está na lista");
        }
    }else{
        node *anterior = NULL;
    
        while (aux != NULL){
            if(aux->nome == nome){
                anterior->next = aux->next;
                free(aux);
                return;
            }
            anterior->next = aux;
            aux = aux->next;
        }
    } 
}



int main() {
    node* head = NULL;

    insere_contato(&head,"alice","81999405657");
    insere_contato(&head,"luis","81999405657");
    insere_contato(&head,"antonio","81999405657");
    insere_contato(&head,"marcus","81999405657");
    
    imprimir(head);

    return 0;
}