/*1. Criar e preencher matriz dinamicamente
Escreva um programa que:
• leia dois inteiros n e m
• aloque dinamicamente uma matriz n x m
• preencha a matriz com valores de 1 até n*m
• imprima os elementos
• libere a memória alocada*/

#include <stdio.h>
#include <stdlib.h>

int** criar_matriz(int nl,int nc);
void** preencher_matriz(int** matriz, int nl, int nc);

int main() {

    int nl,nc;
    printf("escreva o numero de linhas e colunas");
    scanf("%d",&nl);
    scanf("%d",&nc);

    int** matriz = criar_matriz(nl,nc);
    preencher_matriz(matriz, nl, nc);

    //printando a matriz
    printf("\n-------------------matriz-------------------\n");
    for(int i=0; i < nl; i++){
        for(int j=0; j<nc; j++){
            printf("%3d",matriz[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<nl; i++){
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}

int **criar_matriz(int nl,int nc){

    int** matriz = NULL;

    matriz = (int **)malloc(nl*sizeof(int *));

    for(int i=0; i<nl; i++){
        matriz[i] = (int *)malloc(nc*sizeof(int));
        
    }

    return matriz;

}

void **preencher_matriz(int** matriz, int nl, int nc){

    int contador = 1;
    //preenchendo a matriz
    for(int i=0; i<nl; i++){
        for(int j=0; j<nc; j++){
            matriz[i][j] = contador;
            contador++;
        }
    }
}