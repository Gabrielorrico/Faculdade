#include <stdio.h>

// conteudo = *
//ponteiro recebe as posições 
//o conteudo do endereço é o que está na variável 

int main(){
    int x = 2;
    int *p;
    p = &x;

    printf("Valor de x: %d\n",x);
    printf("Endereço de x: %p\n", &x);


    printf("\n");

    int v[5] = {1,2,3,4,5};
    int *n;
    n = &v[0];

    printf("primeiro elemento: %d\n", *n);
    printf("segundo elemento: %d\n", *(n+1));
    printf("segundo elemento: %d\n", *(n+2));




}