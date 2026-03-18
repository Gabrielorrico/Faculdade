#include <stdio.h>

int getQuadrado(int a);

int main(){

    int a;
    scanf("%d",&a);

    int resultado;
    resultado = getQuadrado(a);
    printf("%d ", resultado);

}

int getQuadrado(int a){
    return (a*a);
}
