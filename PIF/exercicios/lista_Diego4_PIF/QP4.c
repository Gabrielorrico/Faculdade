#include <stdio.h>
#include <stdlib.h>
/*. Copiar vetor para outro vetor dinâmico
Escreva um programa que:
• leia um inteiro n
• aloque dinamicamente dois vetores de tamanho n
• leia os valores do primeiro vetor
• copie os valores para o segundo vetor
• imprima o segundo vetor
• libere toda a memória usada
Restrições:
• faça a cópia manualmente com laço
• não use memcpy*/

int *criar_vetor(int n);

int main() {

    int n;
    scanf("%d",&n);

    int *v1;
    int *v2;

    v1 = criar_vetor(n);
    v2 = criar_vetor(n);

    for(int i=0;i<n;i++){
        printf("v1[%d]: ",i);
        scanf("%d",&v1[i]);
    }

    for(int i=0;i<n;i++){
        v2[i] = v1[i];
    }

    printf("\nprintando o segundo vetor:\n");

    for(int i=0;i<n;i++){
        printf("v2[%d] = %d\n",i,v2[i]);
    }
    
    return 0;
}

int *criar_vetor(int n){
    int *vetor;
    vetor = (int *)malloc(n*sizeof(int));
    return vetor;
}