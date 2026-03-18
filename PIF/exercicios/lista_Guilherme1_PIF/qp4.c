#include <stdio.h>

int getMaior(int a, int b);

int main(){

    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    int resultado;
    resultado = getMaior(a,b);
    printf("%d ", resultado);

}

int getMaior(int a, int b){

    if(a>b){
        return a;
    } else {
        return b;
    }

}