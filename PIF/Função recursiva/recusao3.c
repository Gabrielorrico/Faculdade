#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente){

    if(expoente == 0){
        return 1;
    }
    //return 2*2*2 = 8
    //2* potencia(base,expoente) * base

    return base * potencia(base,expoente-1);  

}

int main() {

    int base, expoente;
    scanf("%d",&base);
    scanf("%d",&expoente);

    int resultado = potencia(base,expoente);
    printf("%d", resultado);
    
    return 0;
}