#include <stdio.h>
#include <stdlib.h>
/*10. Média de Alunos
Crie um programa que pergunte ao usuário quantos alunos existem na turma. Aloque dinamicamente um vetor
de float para armazenar as notas. Após calcular a média, libere a memória.*/

float *criar_vetor(int n);


int main() {
    int n;
    scanf("%d",&n);
    float *vetor = criar_vetor(n);

    int soma = 0;

    for(int i=0;i<n;i++){
        scanf("%f",&vetor[i]);
        soma += vetor[i];
    }

    float media = soma/n;
    printf("a media %f",media);
    
    return 0;
}

float *criar_vetor(int n){
    float *vetor;
    vetor = (float *)malloc(n*sizeof(float));
    return vetor;
}