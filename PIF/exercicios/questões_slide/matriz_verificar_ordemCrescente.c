#include <stdio.h>

//para toda coluna válida j, vale:mat[i][j] < mat[i][j+1]

int matCrescente(int N, int mat[N][N]);

int main(){

    int N;
    scanf("%d", &N);
    
    int mat[N][N];

    for(int i=0;i<N; i++){
        for(int j=0; j<N; j++){
        
            printf("digite o valor[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    int retorno;

    retorno = matCrescente(N,mat);
    printf("%d", retorno);


}


int matCrescente(int N, int mat[N][N]) {


    for(int i=0;i < N; i++){
        for(int j=0; j < N-1 ; j++){
            
            if(mat[i][j] >= mat[i][j+1]){
                return 0;

            }
        }
    }
    return 1;
}