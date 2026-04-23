/*8. Vetor Redimensionável
Escreva uma função que receba um ponteiro para um vetor de inteiros alocado dinamicamente e seu tamanho
atual. A função deve ler novos números do usuário até que ele digite 0. Se o vetor ficar cheio, use realloc para
dobrar o tamanho dele. Não esqueça de tratar o caso de falha no realloc.*/

#include <stdio.h>
#include <stdlib.h>

int *criar_vetor(int n);
int *add_no_vetor(int *p,int *n);

int main() {
    int n = 3;
    int *vetor1 = criar_vetor(n);

    for(int i=0;i<n;i++){
        scanf("%d",&vetor1[i]);
    }

    vetor1 = add_no_vetor(vetor1,&n);

    for(int i=0;i<n;i++){
        printf("vetor1 = [%d] = %d\n",i,vetor1[i]);
    }

    free(vetor1);
    vetor1 = NULL;
    
    return 0;
}

int *criar_vetor(int n){
    int *vetor;
    vetor = (int *)malloc(n*sizeof(int));
    return vetor;
}

int *add_no_vetor(int *vetor,int *n){
    int tamanho_atual = *n;
    int capacidade_maxima = *n;
    int numero;

    while (1){
        scanf("%d",&numero);

        if(numero == 0){
            break;
        }
        if(tamanho_atual == capacidade_maxima){
            vetor = (int *)realloc(vetor,(capacidade_maxima*2)*sizeof(int));
            if(vetor == NULL){
                printf("Erro no realloc\n");
                break;
            }
            capacidade_maxima = capacidade_maxima*2;

        }
        vetor[tamanho_atual] = numero;
        tamanho_atual++;
    }
    *n = tamanho_atual;
    return vetor;

}