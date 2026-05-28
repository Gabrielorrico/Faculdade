#include <stdio.h>
#include <stdlib.h>

int soma(int n , int v[]){
    if(n == 0){
        return 0;
    }
    return v[n-1] + soma(n-1, v);
}


int main() {

    int n;
    scanf(" %d",&n);

    int vetor[n];

    for(int i=0; i<n; i++){
        scanf(" %d",&vetor[i]);
    }

    int resultado = soma(n,vetor);
    printf("resultado = %d", resultado);


    
    return 0;
}
