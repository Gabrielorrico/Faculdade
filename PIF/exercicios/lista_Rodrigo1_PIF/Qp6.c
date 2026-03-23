#include <stdio.h>

int compara_sufixo(char *str, char *sufixo);

int main() {

    char str[100];
    scanf("%99[^\n]",str);
    //luis.pdf

    char sufixo[100];
    scanf(" %99[^\n]",sufixo);
    //.pdf

    int resultado = compara_sufixo(str,sufixo);
    printf("%d",resultado);

    
    return 0;
}

int compara_sufixo(char *str, char *sufixo){
    char *inicio_ponto;

    while((*str != '\0')) {
        if(*str == '.') {
            inicio_ponto = str;
        }
        str++;
    }

    while((*sufixo != '\0') && (inicio_ponto != '\0')) {
        if(*sufixo != *inicio_ponto) {
                return 0;
            }
        sufixo++;
        inicio_ponto++; 
    }
    return 1;
}