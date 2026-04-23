#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa{
    char nome[50];
    int idade;
}pessoa;

pessoa* criar_pessoa(char* nome,int idade){
    pessoa* temp = (pessoa *)malloc(1 * sizeof(pessoa));
    if(temp != NULL){
        strcpy(temp->nome,nome);
        temp->idade = idade;
    }
    return temp;
}

int main() {
    pessoa* p = criar_pessoa("luisinhoviadinho",20);
    printf("nome: %s\n",p->nome);
    printf("idade: %d", p->idade);

    free(p);
    
    return 0;
}