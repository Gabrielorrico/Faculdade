#include <stdio.h>
#include <stdlib.h>

int ParesnoVetor(int N, int V[N]);

int main(){

    int N;
    scanf("%d", &N);

    int V[N];

    for(int i=0;i<N;i++){
        printf("Insira o valor [%d]: ",i);
        scanf("%d", &V[N]);
    }

    int resultado;
    resultado = ParesnoVetor(N,V);
    printf("%d",resultado);

}

int ParesnoVetor(int N, int V[N]){

    if(N == 0){
        return 0;
    }

    int contar_pares = 0;

    for(int i=0;i<N;i++){
        if(V[i] % 2 == 0){
            contar_pares++;
        }
    }

    return contar_pares;

}
