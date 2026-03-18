#include <stdio.h>

int main(){

    int N;
    scanf("%d",&N);

    int mat[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int soma_primaria = 0;
    int soma_secundaria = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                soma_primaria += mat[i][j];
            }

            if(i+j == N-1){
                soma_secundaria += mat[i][j];
            }
        }
    }

    int subtracao = soma_primaria - soma_secundaria;
    printf("%d",subtracao);
}