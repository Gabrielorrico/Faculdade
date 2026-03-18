#include <stdio.h>

int matAtranspostaB(int N, int mat_a[N][N], int mat_b[N][N]);

int main(){

    int N;
    scanf("%d", &N);
    
    int mat_a[N][N], mat_b[N][N];

    printf("\nMatriz_A");
    for(int i=0;i<N; i++){
        for(int j=0; j<N; j++){
        
            printf("digite o valor[%d][%d]: ", i,j);
            scanf("%d", &mat_a[i][j]);
        }
    }

    printf("\nMatriz_B");
    for(int i=0;i<N; i++){
        for(int j=0; j<N; j++){
        
            printf("digite o valor[%d][%d]: ", i,j);
            scanf("%d", &mat_b[i][j]);
        }
    }
    int resultado;
    resultado = matAtranspostaB(N,mat_a,mat_b);
    printf("%d",resultado);
}

int matAtranspostaB(int N, int mat_a[N][N], int mat_b[N][N]){

    for(int i=0;i<N; i++){
        for(int j=0; j<N; j++){
        
            if(mat_a[i][j] != mat_b[j][i]){
                return 0;
            }
        }
    }

    return 1;

}