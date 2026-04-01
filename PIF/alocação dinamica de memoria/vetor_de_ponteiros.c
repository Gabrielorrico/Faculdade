#include <stdio.h>
#include <stdlib.h>

int **alocaMatriz(int l, int c){

    int **matrix = (int**)malloc(3*sizeof(int*));

    for(int i=0;i<l;i++){
        matrix[i] = (int*)malloc(c * sizeof(int));
    }

    return matrix;

}

void **preencherMatriz(int **matrix, int l, int c){

    for(int i = 0; i < l; i++){
        for(int j = 0;j < c; j++){
            if(i==j){
                matrix[i][j] = 1;
            } else{
                matrix[i][j] = 0;
            }
            
        }
    }

}

void freeMatriz(int **matriz, int l){
    for(int i = 0;i < l; i++){
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;
}

void printMatriz(int **matrix,int l, int c){

    for(int i=0;i<l;i++){
        for(int j = 0;j < c; j++){
            printf("[%d]", matrix[i][j]);
        }
        printf("\n");
    }
    
}

int main() {

    int **m;
    int **n;
    
    m = alocaMatriz(3,4);
    n = alocaMatriz(4,3);

    preencherMatriz(m,3,3);
    preencherMatriz(n,4,4);

    printMatriz(m,3,3);
    printf("\n");
    printMatriz(n,4,4);





    
    return 0;
}