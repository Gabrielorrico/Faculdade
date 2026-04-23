#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float* notas;
    float media_aluno;
}aluno;

int main() {
    int n;
    scanf("%d",&n);

    aluno vetor[n];

    int qtd,a_qtd=0;
    float a_notas=0,soma_notas=0;
    float media_geral = 0;

    for(int i=0; i<n; i++){
        fgets(vetor[i].nome,49,stdin);
        getchar();
        printf("QTD: ");
        scanf("%d",&qtd);
        a_qtd += qtd;
        vetor[i].notas = (float *)malloc(qtd*sizeof(float));
        for(int j=0;j<qtd;j++){
            printf("nota [%d] = ",j+1);
            scanf("%f",&vetor[i].notas[j]);
            soma_notas += vetor[i].notas[j];
        }
        float media = soma_notas/qtd;
        vetor[i].media_aluno = media;
        a_notas += soma_notas;
        soma_notas = 0;
    }

    media_geral = a_notas/a_qtd;

    for(int i =0;i<n; i++){
        printf("Aluno %d =  [%.2f]\n",i, vetor[i].media_aluno);
    }
    printf("\n A media geral foi: %f",media_geral);
    
    return 0;
}