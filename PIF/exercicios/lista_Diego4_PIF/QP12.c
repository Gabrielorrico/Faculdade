#include <stdio.h>
#include <stdlib.h>
/*12. Concatenar Vetores
Crie uma função que receba dois vetores dinâmicos e seus tamanhos, e retorne um terceiro vetor (também
dinâmico) que seja a junção dos dois.*/

int *criar_vetor(int n);
int *concatenar_vetores(int *vetor1, int n1, int *vetor2, int n2);

int main() {

    
    int n;
    scanf("%d",&n);
    int *vetor1 = criar_vetor(n);
    int *vetor2 = criar_vetor(n);

    for(int i=0;i<n;i++){
        scanf("%d",&vetor1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&vetor2[i]);
    }

    int *vetor3 = concatenar_vetores(vetor1,n,vetor2,n);
    int tamanho_v3 = n*2;
    for(int i=0;i<tamanho_v3;i++){
        printf("%d ",vetor3[i]);
    }

    free(vetor1);
    free(vetor2);
    free(vetor3);

    vetor1 = NULL;
    vetor2 = NULL;
    vetor3 = NULL;

    return 0;
}

int *criar_vetor(int n){
    int *vetor;
    vetor = (int *)malloc(n*sizeof(int));
    return vetor;
}

int *concatenar_vetores(int *vetor1, int n1, int *vetor2, int n2){
    int *vetor3;
    int tamanho_v3 = n1+n2;
    vetor3 = (int *)malloc(tamanho_v3*sizeof(int));

    int i;
    for(i=0;i<n1;i++){
        vetor3[i] = vetor1[i];
    }

    for(int j=0;j<n2;j++){
        vetor3[j + i] = vetor2[j];
    }

    return vetor3;
}