#include <stdio.h>

int semConsec(int N, int V[N], int R[N]);

int main(){
    
    int N, i, resultado;
    scanf("%d", &N);
    
    int R[N];
    int V[N];

    for(i=0;i<N;i++){
        printf("Digite o valor V[%d]: ", i);
        scanf("%d", &V[i]);
    }

    resultado = semConsec(N,V,R);
    printf("%d\n",resultado);

    for(int i=0;i<resultado;i++){
        printf("%d", R[i]);
    }
}

int semConsec(int N, int V[N], int R[N]){

    int contador = 1;

    R[0] = V[0];

    for(int i=1;i<N;i++){
        if(V[i] != V[i-1]){
            R[contador] = V[i];
            contador++;

        }
    }
    return contador;
}

