#include <stdio.h>
#include <stdlib.h>

int maiorValor(int n , int v[]){
    if(n == 0){
        return v[0];
    }
    
    int maior = maiorValor(n-1,v);
    
    if(v[n-1] > maior){
        return v[n-1];

    }else{
        
        return maior;
    }



}


int main() {

    int n;
    scanf(" %d",&n);

    int vetor[n];

    for(int i=0; i<n; i++){
        scanf(" %d",&vetor[i]);
    }

    int resultado = maiorValor(n,vetor);
    printf("resultado = %d", resultado);


    
    return 0;
}
