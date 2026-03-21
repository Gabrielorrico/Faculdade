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
    char *f1 = str;
    char *f2 = sufixo;

    while (*f1 != '\0'){
        f1++;
    }

    while (*f2 != '\0'){
        f2++;
    }

    f1--;
    f2--;

    while (f2 >= sufixo){
        if(f1 < str || *f1 != *f2){
            return 0;

        } 
        f1--;
        f2--;   
    }
    return 1;
}