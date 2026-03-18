#include <stdio.h>

int mudanca_sinais(int N, int mat[N][N]);

int main(){

    int N;
    scanf("%d", &N);

    int mat[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("Insira o valor [%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    int resultado;
    resultado = mudanca_sinais(N, mat);
    printf("%d", resultado);

}

int mudanca_sinais(int N, int mat[N][N]){

    int variacao = 0;
    int ultima_variacao = 0;
    int indice;


    for(int i=0;i<N;i++){
    
        for(int j=0;j<N-1;j++){
            if(mat[i][j] != 0 ){
                if(mat[i][j] > 0 && mat[i][j+1] < 0){
                    variacao++;
                    

                }else if(mat[i][j] < 0 && mat[i][j+1] > 0){
                    variacao++;
                }
            }
        }

        if(variacao > ultima_variacao){
                    ultima_variacao = variacao;
                    indice = i;
                }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%3d", mat[i][j]);

        }
        printf("\n");
    }

    return indice;


}