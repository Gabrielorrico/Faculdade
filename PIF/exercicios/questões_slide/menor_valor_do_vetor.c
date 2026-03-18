#include <stdio.h>

int main() {
    int tamanho , i;
    

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(i=0; i<tamanho; i++) {
        printf("Digite o valor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    int menor_valor = vetor[0];
    int indice = 0;

    for(i=0; i<tamanho; i++) {

        if (vetor[i] < menor_valor){
            menor_valor = vetor[i];
            indice = i;

        }
            
    }

    printf("O menor valor e: %d e esta no indice: %d", menor_valor, indice);

}