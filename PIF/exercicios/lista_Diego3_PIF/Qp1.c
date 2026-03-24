#include <stdio.h>

void estatisticas(float *temp, int n, float *media, float *maior, float *menor);

int main() {
    float media = 0;
    float maior = 0;
    float menor = 0;

    int n;
    scanf("%d",&n);

    float temp[n];
    for(int i =0; i<n; i++){
        scanf("%f",&temp[i]);
    }

    estatisticas(temp,n,&media,&maior,&menor);

    printf("A media é: %f", media);
    printf("O maior é: %f", maior);
    printf("O menor é: %f", menor);

    return 0;
}

void estatisticas(float *temp, int n, float *media, float *maior, float *menor){
    float soma = 0;
    *maior = temp[0];
    *menor = temp[0];
    for(int i=0; i<n; i++){
        soma += *(temp +i);
        if(*(temp + i) > *maior){
            *maior =  *(temp + i);
        }
        if(*(temp + i) < *menor){
            *menor =  *(temp + i);
        }
    }
    *media = soma/n;
}

