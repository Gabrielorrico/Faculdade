#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char titulo[50];
    int ano;
} Livro;

typedef struct {
    char nome[50];
    int qtd_livros;
    Livro livros[10];
} Autor;

Autor autor_rct(Autor v[], int n) {
    int idx = 0;
    int maior_ano = v[0].livros[0].ano;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].qtd_livros; j++) {
            if (v[i].livros[j].ano > maior_ano) {
                maior_ano = v[i].livros[j].ano;
                idx = i;
            }
        }
    }

    return v[idx]; 

}

int main() {
    int n;
    scanf("%d", &n);
    
    Autor v[n];

    for (int i = 0; i < n; i++) {
        getchar();
        fgets(v[i].nome, 50, stdin);
        scanf("%d", &v[i].qtd_livros);
        for (int j = 0; j < v[i].qtd_livros; j++) {
            getchar();
            fgets(v[i].livros[j].titulo, 50, stdin);
            scanf("%d", &v[i].livros[j].ano);
        }
    }

    Autor resultado = autor_rct(v, n);

    printf("%s", resultado.nome);

    return 0;
    
}
