#include <stdio.h>

int mediaPond(int N, float mat[N][N], float P[N]);

int main(){
    
    int N;
    scanf("%d", &N);

    float mat[N][N];
    float P[N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){

            printf("insira o valor [%d][%d]: ",i,j);
            scanf("%f", &mat[i][j]);
        }
    }

    for(int i=0;i<N;i++){
        printf("insira o peso de número [%d]: ",i);
        scanf("%f", &P[i]);
    }

    float resultado;

    resultado = mediaPond(N,mat,P);
    printf("\n%.2f",resultado);



}

int mediaPond(int N, float mat[N][N], float P[N]){

    // soma ponderada
    // mat[0][j] * P[0] + mat[1][j] * p[1]... = Soma_ponderada
    
    float somaPond = 0;
    float menorSoma = 9999;
    int indice;

    for(int j=0;j<N;j++){
        somaPond = 0;
        for(int i=0;i<N;i++){
            somaPond += mat[i][j] * P[i];
            
        
        }
        if(menorSoma > somaPond){
            menorSoma = somaPond;
            indice = j;

        }

    }

    printf("\n");

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%8.2f", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0;i<N;i++){
        printf("%8.2f",P[i]);
    }

    return indice;


}
