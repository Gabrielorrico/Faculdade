#include <stdio.h>
#include <stdlib.h>

/*16. Matriz Dinâmica Clássica
Escreva um programa que aloque uma matriz de inteiros M x N usando um ponteiro para ponteiro (int **). O
programa deve preencher a matriz com valores aleatórios, imprimir a transposta dela e liberar toda a memória
(cada linha individualmente e depois o ponteiro principal).*/

int** criar_matriz(int n, int m);

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int** matriz = criar_matriz(n,m);
    int contador = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz[i][j] = contador;
            contador++;
        }
    }

    printf("------------------- matriz normal ------------------------\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%3d",matriz[i][j]);
        }
        printf("\n");
    }

    printf("------------------- matriz transposta ---------------------\n");
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

int** criar_matriz(int n, int m){
    int** matriz;
    matriz = (int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        matriz[i] = (int *)malloc(m*sizeof(int));
    }
    return matriz;
}