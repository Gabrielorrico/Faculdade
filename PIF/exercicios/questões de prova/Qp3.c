//Questão pedia uma função para remover os espaços de uma string tanto no meio quanto nos cantos chamada normaliza_str apenas recebendo um parametro;

#include <stdio.h>

char *normaliza_str(char *str);

int main() {

    char str[100];
    fgets(str,99,stdin);

    char *retorno = normaliza_str(str);
    printf("%s",*retorno);
    printf("\n");
    printf("%s",str);
    return 0;
}

char *normaliza_str(char *str){
    char *origem = str;
    char *destino = str;

    while (*origem == ' '){
        origem++;
    }

    int ultimo_foi_espaco = 0;
    

    while (*origem != '\0'){
        if(*origem == ' '){
            if(ultimo_foi_espaco == 0){
                *destino = ' ';
                destino++;
                ultimo_foi_espaco = 1;
            }

        } else {
            *destino = *origem;
            destino++;
            ultimo_foi_espaco = 0;
        }

        origem++;
}
    *destino = '\0';

    return str;
    
}