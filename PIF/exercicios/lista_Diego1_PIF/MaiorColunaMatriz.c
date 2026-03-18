#include <stdio.h>

int getColuna(int N, int mat[N][N]);

int main(){

    int N;
    scanf("%d",&N);
    
    int mat[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int resultado;
    resultado = getColuna(N,mat);
    printf("%d",resultado);

}

int getColuna(int N, int mat[N][N]){

    int soma_coluna = 0;
    int maior_coluna = 0;
    int indice_j = 0;

    for(int j=0;j<N;j++){
        soma_coluna = 0;
        for(int i=0;i<N;i++){
            soma_coluna += mat[j][i];

            
            
        }
        if(maior_coluna < soma_coluna){
            maior_coluna = soma_coluna;
            indice_j = j;

        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }


    return indice_j;


}