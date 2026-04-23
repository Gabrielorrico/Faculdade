#include <stdio.h>
#include <stdlib.h>
/*6. Inserir elemento em posição específica
Escreva um programa que:
• leia um inteiro n
• aloque dinamicamente um vetor de n inteiros
• leia os elementos
• leia um valor x e uma posição p
• aumente o vetor em 1 posição usando realloc
• insira x na posição p, deslocando os elementos à direita
• imprima o vetor final
• libere a memória
Considere posições válidas de 0 até n.*/

int *criar_vetor(int n);

int main() {
    int n;
    scanf("%d",&n);

    int *vetor = criar_vetor(n);
    for(int i=0;i<n;i++){
        scanf("%d", &vetor[i]);
    }

    int x,p;
    printf("escolha a posicao que deseja inserir o numero: ");
    scanf("%d", &p);
    printf("escolha o numero que deseja inserir na posicao %d: ",p);
    scanf("%d",&x);

    n++;
    vetor = (int *)realloc(vetor,n*sizeof(int));
   
    for(int j=n-1;j>p;j--){
        vetor[j] = vetor[j - 1];
    }
    vetor[p] = x;
        
    printf("O vetor  com o novo valor");
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