#include <stdio.h>

void subMat(int R, int C, int K, int A[R][C]);

int main(){

    int R,C,K;
    scanf("%d", &R);
    scanf("%d", &C);
    scanf("%d", &K);
   

    int A[R][C];

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("Insira o valor [ %d][ %d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    subMat(R,C,K,A);
    

    return 0;

}

void subMat(int R, int C, int K, int A[R][C]){

    int maior_soma = -10000;
    int soma = 0;
    int indice_i;
    int indice_j;

    for(int i=0;i<=R-K;i++){
        for(int j=0;j<=C-K;j++){
            soma = 0;

            for(int x=0;x<K;x++){
                for(int y=0;y<K;y++){
                    soma += A[i + x][j + y];

                }
                
            }

            if(soma > maior_soma){
                    maior_soma = soma;
                    indice_i = i;
                    indice_j = j;

                }
        }
    }

    for(int i=0;i<K;i++){
        for(int j=0;j<K;j++){
            printf("%d",A[i + indice_i][j + indice_j]);
        }
        printf("\n");
    }

    printf("%d %d %d",maior_soma,indice_i,indice_j);


}