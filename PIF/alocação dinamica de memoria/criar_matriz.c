#include <stdio.h>
#include <stdlib.h>

int** criar_matriz(int n, int m);


int main() {

    int nl,nc;

    printf("insira o numero de linhas");
    scanf("%d",&nl);

    printf("insira o numero de colunas");
    scanf("%d",&nc);

    int **matriz = criar_matriz(nl,nc);

    for(int i=0; i<nl; i++){
        for(int j=0; j<nc; j++){
            matriz[i][j] = i + j;
        }
    }

    for(int i=0; i<nl; i++){
        for(int j=0; j<nc; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<nl; i++){
        free(matriz[i]);
    }

    free(matriz);
    
    return 0;
}

int** criar_matriz(int n, int m){
    
    int **matriz = NULL;

    matriz = (int **)malloc(n*sizeof(int *));

    if(matriz == NULL) {
        return 1;
    }

    for(int i=0; i < n; i++){
        matriz[i] = (int *)malloc(m*sizeof(int));

    }

    return matriz;
}