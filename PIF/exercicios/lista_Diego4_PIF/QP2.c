/*2. Ler matriz e encontrar o maior elemento
Escreva um programa que:
• leia n e m
• aloque dinamicamente uma matriz n x m
• leia os valores do usuário
• determine e imprima o maior valor da matriz
• libere a memória corretamente*/

#include <stdio.h>
#include <stdlib.h>

int **criar_matriz(int nl, int nc);

int main() {
    int nl,nc;
    printf("digite o tamanho das linhas e das colunas: ");
    scanf("%d %d",&nl,&nc);

    int** matriz = criar_matriz(nl,nc);

    for(int i=0; i < nl; i++){
        for(int j=0; j < nc; j++){
            printf("digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior = matriz[0][0];

    for(int i=0; i < nl; i++){
        for(int j=0; j < nc; j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("o maior valor encontrado na matriz foi: %d", maior);

    for(int i=0; i<nl; i++){
        free(matriz[i]);
    }

    free(matriz);
    return 0;
}

int **criar_matriz(int nl, int nc){
    int **matriz;
    matriz = (int** )malloc(nl*sizeof(int *));

    for(int i=0; i<nl; i++){
        matriz[i] = (int *)malloc(nc*sizeof(int));
    }
    return matriz;
}