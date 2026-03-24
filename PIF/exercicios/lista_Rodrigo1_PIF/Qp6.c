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
    char *fim_str = str;
    char *fim_suf = sufixo;

    while((*fim_str != '\0')) {
        fim_str++;
    }

    while((*fim_suf != '\0')) {
        fim_suf++;
    }

    fim_suf--;
    fim_str--; 
    //luiz.pdf
    //    .pdf

    while((fim_suf >= sufixo)) {
        if(*fim_suf != *fim_str) {
            return 0;
        }
        fim_suf--;
        fim_str--; 
    }
    return 1;
}