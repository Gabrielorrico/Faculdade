#include <stdio.h>
#include <stdlib.h>

typedef struct vetor{
    int *valores;
    int tamanho;
}vetor;

int main() {
    vetor vetor1;
    printf("qual o tamanho do vetor: ");
    scanf("%d",&vetor1.tamanho);

    vetor1.valores = (int *)malloc(vetor1.tamanho * sizeof(int));
    
    return 0;
}