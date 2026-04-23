#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    int n;
    scanf(" %d",&n);
    getchar();

    char **matriz;
    matriz = (char **)malloc(n*sizeof(char*));
    char nome[100];

    for(int i=0;i<n;i++){
        fgets(nome,sizeof(nome),stdin);
        int tamanho = strlen(nome);
        matriz[i] = (char *)malloc((tamanho+1)*sizeof(char));
        strcpy(matriz[i],nome);
    }

    for(int i=0;i<n;i++){
        printf("%s",matriz[i]);
    }

    for(int i=0;i<n;i++){
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}