#include <stdio.h>

int getSoma(int N, int mat[N][N]);

int main(){

    int N;
    scanf("%d", &N);

    int mat[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d", &mat[i][j]);

        }
    }

    int resultado;
    resultado = getSoma(N,mat);
    printf("%d",resultado);

}

int getSoma(int N, int mat[N][N]){

    int soma_acima = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){

            if(i<j){
                soma_acima+= mat[i][j+1];

            }

        }
    }



    return soma_acima;

}