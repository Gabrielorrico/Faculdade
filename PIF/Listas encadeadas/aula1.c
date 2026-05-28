#include <stdio.h>
#include <stdlib.h>
//Vetor não é mais sequencial, 
//desvantagem, os indices não são mais usaveis, é necessario percorrer as outras listas ou indices obrigatoriamente 
//
typedef struct node{
    int valor;
    struct node *next;
}node;


int main() {
    node * head = NULL;
    node * tail = NULL;

    int n;
    printf("Digite a quantidade de celulas");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        node * novo = (node *)malloc(sizeof(node));

        printf("Digite o valor %d: ",i+1);
        scanf("%d",novo->valor);
        novo->next = NULL;
        //head->valor = 10
        //head->next = NULL
        if (head == NULL){
            head = novo;
            tail = novo;
        }else {
            tail->next = novo;  // encadeia no final
            tail = novo;        // atualiza a cauda

        }
    }
    
    
    return 0;
}