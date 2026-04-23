#include <stdio.h>
#include "livros.h"

void inserir_livro(livro l,livro *vet_livros){
    scanf("id: %d",&l.ID);
    scanf("quantidade de pagina: %d",&l.pag);
    printf("Digite o nome do autor ");
    fgets(l.autor,99,stdin);
    printf("Digite o nome do livro ");
    fgets(l.nome,99,stdin);
}

void deletar_livro(livro l,livro *vet_livros){

}