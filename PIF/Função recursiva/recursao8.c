#include <stdio.h>
#include <stdlib.h>

void inverte(int v[], int inicio, int fim){

    if(inicio >= fim){
        return;
    }

    int temp = v[inicio];
    v[inicio] = v[fim];
    v[fim] = temp;

    return inverte(v,inicio+1,fim-1);

}


int main() {

    int n;
    scanf(" %d",&n);

    int vetor[n];

    for(int i=0; i<n; i++){
        scanf(" %d",&vetor[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d ",vetor[i]);
    }

    int inicio = 0;
    int fim = n-1;

    inverte(vetor,inicio, fim);

    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ",vetor[i]);
    }

    
    return 0;
}
