#include <stdio.h>

int matIdentidade(int N, int  mat[N][N]);

int main(){

    int N;
    scanf("%d", &N);

    int mat[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("Insira o valor [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    int resultado;
    resultado = matIdentidade(N,mat);

    printf("%d", resultado);


}

int matIdentidade(int N, int  mat[N][N]){

    if(N == 0){
        return 0;
    }

    int contador = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j && mat[i][j] == 1){
                contador++;

            }else if(mat[i][j] == 0){
                contador++;

            }


        }
    }

    //printf("%d",contador);

    if(contador == (N*N)){

        return 1;
    }

    return 0;

}