#include <stdio.h>
#include <stdlib.h>

int somaNvetor(int qtd,int n,int vetor[]){
    if (qtd == 0) {
        return 0;
    }

    return vetor[qtd - 1] + somaNvetor(qtd-1,n,vetor);

}
/* 

SOMAR OS PRIMEIROS NUMEROS INTEIROS 

int somaNvetor(int n){
    if (n == 0) {
        return 0;
    }

    return n + somaNvetor(n-1);

} */

int main() {
    
    int vetor[5] = {1,2,3,10,7};

    somaNvetor(3, 5, vetor);

    return 0;
}