#include <stdio.h>

int produtoEscalar(int *v1, int *v2,int n);

int main(){

    int n;
    scanf("%d", &n);

    int v1[n];
    int v2[n];

    for(int i=0; i<n; i++){
        scanf("%d",&v1[i]);
    }

    for(int i=0; i<n; i++){
        scanf("%d",&v2[i]);
    }

    int resultado;
    resultado = produtoEscalar(v1,v2,n);
    printf("resultado: %d", resultado);

}

int produtoEscalar(int *v1, int *v2,int n){

    int produtoescalar = 0;
    
    for(int i=0;i<n;i++){
        produtoescalar += *(v1+i) * *(v2+i);
    }

    return produtoescalar;

}