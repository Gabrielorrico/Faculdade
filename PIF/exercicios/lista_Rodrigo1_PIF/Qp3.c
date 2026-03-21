#include <stdio.h>
#include <string.h>

int contar_tamanho(char *str);

int main() {
    char str[100];
    fgets(str,99,stdin);

    str[strcspn(str,"\n")] = '\0';

    int resultado = contar_tamanho(str);
    printf("%d", resultado);
    
    return 0;
}

int contar_tamanho(char *str){
    int contador = 0;

    while (*str != '\0'){
        contador++;
        str++;

    }
    return contador;
}