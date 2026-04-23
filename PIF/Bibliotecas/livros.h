#include <stdio.h>
#include <stdlib.h>

typedef struct livro{
    int ID;
    int pag;
    char nome[100];
    char autor[100];
}livro;

void inserir_livro(struct livro l, struct livros *vet_livros);
void deletar_livro(struct livro l, struct livros *vet_livros);

