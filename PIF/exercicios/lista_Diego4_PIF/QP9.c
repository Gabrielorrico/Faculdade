#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*9. Cópia de Strings Personalizada
Crie uma função char* clonar_string(char* s) que meça o tamanho da string s, aloque exatamente a
quantidade de memória necessária (incluindo o caractere nulo \0) e copie o conteúdo. O programa principal
deve liberar a memória após o uso.*/

char *clonar_string(char *str);

int main() {
    char str[100];
    fgets(str,99,stdin);
    str[strcspn(str,"\n")] = '\0';

    char *resultado = clonar_string(str);
    printf("%s",resultado);

    free(resultado);

    return 0;
}

char *clonar_string(char *str){
    char *temp;
    char *p = str;
    int contador = 0;
    while (*p != '\0'){
        contador++;
        p++;
    }
    contador++;

    temp = (char *)malloc(contador*sizeof(char));

    for(int i=0;i<contador;i++){
        temp[i] = str[i];
    }

    return temp;
}