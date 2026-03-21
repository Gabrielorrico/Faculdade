#include <stdio.h>
#include <string.h>

int extrai_digitos(char *origem, char *destino);

int main() {
    char destino[100];
    char str[100];
    fgets(str,99,stdin);

    str[strcspn(str,"\n")] = '\0';

    int resultado = extrai_digitos(str,destino);
    printf("\nSenha completa: %s",str);
    printf("\nNumeros contidos na senha: %s",destino);
    printf("\nquantidade de numeros na senha: %d", resultado);


    
    return 0;
}

int extrai_digitos(char *origem, char *destino){
    int contador = 0;
    while (*origem != '\0'){
        if(*origem >= '0' && *origem <= '9'){
            *destino = *origem;
            contador++;
            destino++;
        }
        origem++;

    }
    *destino = '\0';

    return contador;
}