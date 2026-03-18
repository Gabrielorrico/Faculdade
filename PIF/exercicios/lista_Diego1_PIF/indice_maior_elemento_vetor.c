#include <stdio.h>

int maiorValor(int N, int V[N]);

int main(){
    int N;
    scanf("%d", &N);

    int V[N];

    for(int i=0; i<N;i++){
        scanf("%d", &V[i]);
    }

    int resultado;
    resultado = maiorValor(N,V);
    printf("--------------");
    printf("\n%d", resultado);
    printf("--------------");
}

int maiorValor(int N, int V[N]){

    int maior_valor = 0;
    int indice = 0;

    for(int i=0; i<N;i++){
        if(V[i] > maior_valor){
            indice = i;
            maior_valor = V[i];
        }
    }

    return indice;
}