#include <stdio.h>
#include <string.h>

void separa_transacoes(float *valores, int n, float *positivos, int *qtd_pos, float *negativos, int *qtd_neg);

int main() {
    int qtd_pos = 0;
    int qtd_neg = 0;
    
    int n;
    scanf("%d",&n);

    float positivos[n];
    float negativos[n];

    float valores[n];
    for(int i=0;i<n;i++){
        scanf("%f",&valores[i]);
    }

    separa_transacoes(valores,n,positivos,&qtd_pos,negativos,&qtd_neg);

    printf("A quantidade de positivos é: %d\n",qtd_pos);
    printf("A quantidade de negativos é: %d\n",qtd_neg);

    for(int i=0;i<qtd_pos;i++){
        printf(" %.2f",positivos[i]);

    }
    printf("\n");
    for(int i=0;i<qtd_neg;i++){
        printf(" %.2f",negativos[i]);

    }
    return 0;
}

void separa_transacoes(float *valores, int n, float *positivos, int *qtd_pos, float *negativos, int *qtd_neg){
    //120.0 45.5 0.0 300.0 -80.0
    // 120 00 00 00 00
    float *percorre_valores = valores;
    float *percorre_posi = positivos;
    float *percorre_negati = negativos;

    for(int i=0;i<n;i++){

        if(*percorre_valores > 0){
            *percorre_posi  = *percorre_valores;
            *qtd_pos += 1;
            percorre_posi++;

        }else if(*percorre_valores < 0){
            *percorre_negati = *percorre_valores;
            *qtd_neg += 1;
            percorre_negati++;

        }
        
        percorre_valores++;
    }

}