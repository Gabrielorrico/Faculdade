#include <stdio.h>
#include <stdlib.h>
/*5. Remover um elemento de um vetor
Escreva um programa que:
• leia um inteiro n
• aloque dinamicamente um vetor de n inteiros
• leia os valores do vetor
• leia um valor x a ser removido
• remova a primeira ocorrência de x
• reduza o vetor com realloc
• imprima o vetor resultante
Observação:
• caso x não exista, o vetor deve permanecer inalterado*/

int *criar_vetor(int n);

int main() {
    int n;
    scanf("%d",&n);
    int *vetor = criar_vetor(n);

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    int x;
    printf("\ndigite o valor que deseja apagar: \n");
    scanf("%d",&x);

    printf("Vetor antes de apagar o X:\n");
    for(int i=0;i<n;i++){
        printf("%d ",vetor[i]);
    }

    for(int i=0;i<n;i++){
        if(vetor[i] == x){
            //fiz o Shift
            for(int j=i;j<n-1;j++){
                vetor[j] = vetor[j + 1];
            }
            n--;
            break;
        }
    }

    vetor = (int *)realloc(vetor,n*sizeof(int));

    printf("\nVetor depois de apagar o X:\n");
    for(int i=0;i<n;i++){
        printf("%d ",vetor[i]);
    }

    free(vetor);
    return 0;
}

int *criar_vetor(int n){
    int *vetor;
    vetor = (int *)malloc(n*sizeof(int));
    return vetor;
}