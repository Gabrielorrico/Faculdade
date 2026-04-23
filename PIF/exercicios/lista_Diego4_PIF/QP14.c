#include <stdio.h>
#include <stdlib.h>
//#define NEW(t, n) ((t*)malloc(sizeof(t)*n))

int main() {
    //char* vetor = NEW(char,50);
    int n, m;
    scanf("%d %d", &n, &m);

    int **matriz = (int**) malloc(n * sizeof(int*));
    for(int i=0; i<n; i++){
        matriz[i] = (int*) malloc(m * sizeof(int));
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            soma += matriz[i][j];
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("%d", soma);

    return 0;
}