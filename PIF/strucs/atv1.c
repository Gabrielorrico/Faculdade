#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Endereco{
    char rua[50];
    int numero;
    
}Endereco;

typedef struct Aluno{
    char nome[50];
    int idade;
    Endereco end;

    
}Aluno;


int main() {

    int n;
    printf("escreva quantos alunos voce deseja declarar? ");
    scanf("%d", &n);

    Aluno alunos[n];

    for(int i=0; i<n; i++){
        scanf("%49s", alunos[i].nome);
        scanf("%d", &alunos[i].idade);
        scanf("%49s",alunos[i].end.rua);
        scanf("%d",&alunos[i].end.numero);
    }

    for(int i=0; i<n; i++){
        printf("\n---------- Aluno %d -------------\n", i+1);
        printf("Nome : %s\n", alunos[i].nome);
        printf("Idade: %d\n",alunos[i].idade);
        printf("Rua: %s\n",alunos[i].end.rua);
        printf("Numero da rua: %d\n",alunos[i].end.numero);
    }
    
    return 0;
}