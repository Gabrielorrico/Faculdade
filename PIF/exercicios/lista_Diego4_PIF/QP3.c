#include <stdio.h>
#include <stdlib.h>

/*3. Aumentar o tamanho de um vetor com realloc
Escreva um programa que:
• aloque inicialmente um vetor para 5 inteiros
• leia 5 valores
• use realloc para aumentar o vetor para 10 posições
• leia os 5 novos valores
• imprima todos os 10 elementos
• libere a memória*/

int *criar_vetor(int n);

int main() {
    int n = 5;

    int *vetor = criar_vetor(n);
    printf("escreva os 5 primeiros valores:");
    for(int i=0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    vetor = (int *)realloc(vetor, 10*sizeof(int));
    for(int i=n; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i=0;i<10;i++){
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }

    return 0;
}

int *criar_vetor(int n){
    int *vetor;
    vetor = (int *)malloc(n*sizeof(int));
    return vetor;
}