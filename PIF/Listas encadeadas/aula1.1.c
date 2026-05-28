#include <stdio.h>
#include <stdlib.h>
//Vetor não é mais sequencial, 
//desvantagem, os indices não são mais usaveis, é necessario percorrer as outras listas ou indices obrigatoriamente 
//
typedef struct node{
    int valor;
    struct node *next;
}node;

node* create_node(int valor){
    node *temp = (node *)malloc(sizeof(node));
    temp->valor = valor;
    temp->next = NULL;
}

void add(node** head,int valor){ 
    if(*head == NULL){
        *head = create_node(valor);
    } else{
        (*head)->next = create_node(valor);
    }
    
}


int main() {
    node *head = NULL;
    add(&head,10);
    add(&head,20);


    node *temp = head;
    while(temp != NULL){
        printf("%d",temp->valor);
        temp = temp->next;
    }
    
    return 0;
}