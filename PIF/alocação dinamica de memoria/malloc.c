#include <stdio.h>
#include <stdlib.h>

int main() {
    float *array;
    int n,i;
    float soma = 0.0;

    printf("qual o tamanho do vetor de notas? ");
    scanf("%d",&n);
    array = (float *)malloc(n*sizeof(float));

    for(i=0;i<n;i++){
        scanf("%f",&array[i]);
        soma += array[i];
    }

    float media = 0;
    media = soma/n;

    printf("A media das notas é: %.2f", media);
    return 0;
    array = NULL;
}