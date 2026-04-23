#include <stdio.h>
#include "livros.h"

#define VEC_SIZE 10

int main() {
    struct livro vet_livros[VEC_SIZE];
    struct livro l;

    for(int i=0; i<VEC_SIZE; i++){
        inserir_livro(l,vet_livros);

    }
    
    return 0;
}

