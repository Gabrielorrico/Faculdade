#include <stdio.h>

void concatenar(char *destino, char *origem);

int main() {

    char destino[100];
    scanf("%99[^\n]",destino);

    char origem[100];
    scanf(" %99[^\n]",origem);

    concatenar(destino,origem);
    printf("%s",destino);
    

    
    return 0;
}

void concatenar(char *destino, char *origem){
    
    while(*destino!= '\0'){
        destino++;
    }

    while(*origem != '\0'){
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0';
    
}