#include <stdio.h>
#include <stdlib.h>

/*11. Inversão de Vetor
Peça ao usuário um valor N. Aloque dinamicamente um vetor de inteiros de tamanho N. Preencha o vetor com
dados do usuário e, em seguida, crie um segundo vetor dinâmico para armazenar os elementos do primeiro
vetor em ordem inversa. Imprima o segundo vetor e libere ambos.*/

int *criar_vetor(int n);

int main() {
    int n;
    scanf("%d",&n);
    int *vetor = criar_vetor(n);

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }

    int *temp = criar_vetor(n);

    for(int i=0;i<n;i++){
        temp[i] = vetor[n-i-1];
    }

    for(int i=0;i<n;i++){
        printf("%d",temp[i]);
        printf("\n");
    }
    
    return 0;
}

int *criar_vetor(int n){
    int *vetor;
    vetor = (int *)malloc(n*sizeof(int));
    return vetor;
}