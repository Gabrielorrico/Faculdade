#include <stdio.h>

int Soma(int num1, int num2);

int main(){

    int num1,num2;
    
    printf("Digite o numero 1: ");
    scanf("%d", &num1);

    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    int resultado = 0;
    resultado = Soma(num1,num2);
    printf("%d",resultado);

    
}

int Soma(int num1, int num2){

    int soma = 0;

    soma = num1 + num2;

    return soma;

}