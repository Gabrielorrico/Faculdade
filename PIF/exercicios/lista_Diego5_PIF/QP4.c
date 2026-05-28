#include <stdio.h>
#include <stdlib.h>
/*4. Contar o Número de Nós
Crie a função int conta_nos(struct node *head) que retorna a quantidade de nós presentes na lista.
Exemplo: Lista com 5 nós → retorna 5. Lista vazia → retorna 0.
■ Dica: Inicialize um contador em zero e incremente a cada nó percorrido.
*/

typedef struct Node{
    int valor;
    struct Node* next;
}node;

node *creatNode(int valordousuario){
    node *temp = (node *)malloc(sizeof(node));
    temp->valor = valordousuario;
    temp->next = NULL;
    //retorna o endereço do que a gente acabou de criar
    return temp;
}

//O tipo da variavel é node* e preciso pegar o conteudo do endereço de memoria de Head (*head) logo precisa ser **;
void add(node **h,int valor){
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
            printf("%d ", aux->valor);
            aux = aux->next;
        }
    }
}

int conta_nos(node *h){
    node* aux = h;
    int contador = 0;
    while (aux != NULL){
        contador++;
        aux = aux->next;
    }
    return contador;
}

int main() {


    node *h = NULL;

    add(&h, 10);
    add(&h, 20);
    add(&h, 30);
    add(&h, 40);
    add(&h, 50);
    add(&h, 60);


    int resultado = conta_nos(h);
    printf("Número de nodes :%d", resultado);
    
    return 0;
}