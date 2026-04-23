#include <stdio.h>
#include <stdlib.h>

int** criar_matriz(int n);

int main() {
    int n;
    scanf("%d",&n);

    int** matriz = criar_matriz(n);

    for(int i=0;i<n;i++){
        for(int j=(i);j<n;j++){
            matriz[i][j] = matriz[i-1][j-1] + matriz[i - 1][j];

        }
    }
    
    //       1
    //      1 1
    //     1 2 1
    //    1 3 3 1
    //   1 4 6 4 1
    // 1 5 10 10 5 1
    //1 6 15 20 15 6 1

    for(int i=0;i<n;i++){
        for(int j=i ; j<n ; j++){
            printf("%d",matriz[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}

int** criar_matriz(int n){
    int** matriz;
    matriz = (int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        matriz[i] = (int *)malloc((i+1)* sizeof(int));
    }
    return matriz;
}