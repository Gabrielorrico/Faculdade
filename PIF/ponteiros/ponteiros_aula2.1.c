#include <stdio.h>

void printVetor(int *N ,int *V);

int main(){

    int N;
    scanf("%d",&N);

    int V[N];
    for(int i=0;i<N;i++){
        scanf("%d",&V[i]);
    }

    printVetor(&N,&V);

    

}

void printVetor(int *N ,int *V){

    for(int i = 0;i < *N; i++){
        printf(" %d",V[i]);
    }
    printf("\n===============\n");

    for(int i = 0;i < *N; i++){
        printf(" %d",*(V+i));
    }

}