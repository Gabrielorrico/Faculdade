#include <stdio.h>
#include <stdlib.h>

int **criarmatriz(int n, int m){
    int **matriz;
    matriz = (int**) malloc(n * sizeof(int*));

    for (int i=0; i<n; i++){
        matriz[i] = (int*) malloc (m * sizeof(int));
    }
    return matriz;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int **matriz = criarmatriz(n, m);

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma=0;

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            soma += matriz[i][j];
        }
        printf("\nA soma da linha %d e %d\n", i, soma);
        soma = 0;
    }
    
    return 0;
}