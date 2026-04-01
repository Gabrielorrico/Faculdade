// se o valor do vetor 1 for par a gente armazena em outro vetor declarado na main a quantidade de valores que são pares

#include <stdio.h>

int contar_valor_pares(int *vetor,int n,int *vetor_saida);

int main() {
    int n;
    scanf("%d",&n);

    int vetor[n];
    int vetor_saida[n];

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    int resultado = contar_valor_pares(vetor,n,vetor_saida);
    printf("%d",resultado);

    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d",vetor_saida[i]);
    }

    
    return 0;
}

int contar_valor_pares(int *vetor,int n,int *vetor_saida){
    int conta_pares = 0;

    for(int i=0;i<n;i++){
        if(*(vetor + i)%2==0){
            conta_pares++;
        }
        *(vetor_saida + i) = conta_pares;
    }
    return conta_pares;
}

