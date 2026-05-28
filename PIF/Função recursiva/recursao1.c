#include <stdio.h>

//gasta muita memoria pois a pilha fica sempre cheia e o primeiro sempre tem que esperar o retorno do proximo,

// a vantagem é um codigo curto
//agora se precisa se preocupar com a quantidade de tempo em que o codigo roda é desvantagem

int fat(int n){
    if(n == 1 ){
        return 1;
    }

    return n * fat(n-1);

}

int main() {
    int n;
    printf("digite o numero do fatorial que voce quer: ");
    scanf("%d",&n);

    int resultado = fat(n);
    printf("%d",resultado);
    
    return 0;
}