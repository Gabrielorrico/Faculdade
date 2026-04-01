#include <stdio.h>
#include <stdlib.h>

int* criar_vetor(int n);

int main() {
    int n;
    scanf("%d",&n);

    int *resultado = criar_vetor(n);

    for(int i=0;i<n;i++){
        printf("%d",resultado[i]);
    }
    
    free(resultado);
    resultado = NULL;
    return 0;
}

int* criar_vetor(int n){

    int *array;
    array = (int *)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        array[i] = i;
    }

    return array;
}