#include <stdio.h>

int substitui_fora_do_intervalo(float *pesos, int n, float minimo, float maximo, float substituto);

int main() {
    int n;
    scanf("%d",&n);

    float minimo,maximo,substituto;
    scanf("%f",&minimo);
    scanf("%f",&maximo);
    scanf("%f",&substituto);

    float pesos[n];
    for(int i=0;i<n;i++){
        scanf("%f",&pesos[i]);
    }

    substitui_fora_do_intervalo(pesos,n,minimo,maximo,substituto);
    printf("\n");
    for(int i=0;i<n;i++){
        printf(" %.2f",pesos[i]);
    }
    return 0;
}

int substitui_fora_do_intervalo(float *pesos, int n, float minimo, float maximo, float substituto){
    float *percorre_pesos = pesos;
    int contador = 0;

    for(int i=0;i<n;i++){
        if(*percorre_pesos > maximo){
            *percorre_pesos = substituto;
            contador++;

        }else if(*percorre_pesos < minimo){
            *percorre_pesos = substituto;
            contador++;
        }

        percorre_pesos++;
    }
    return contador;

}