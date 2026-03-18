#include <stdio.h>
#include <string.h>

char *procurar(char *string, char ch);

int main() {

    char str[50] = "gabriel orrico";
    char *ptr = procurar(str, 'o');

    printf("variavel completa: %s\n", str);
    printf("String a partir do espaço:%s\n",ptr);

    // Fnções da biblioteca string
    printf("\n==================================\n");

    char strn[50] = "Lula gostosinho";
    char stn[50] = " e luis safadinho";
    char destino[50];

    printf("\nAntes da concatenacao: %s",strn);

    strcat(strn, stn);
    printf("\nDepois da concatenação: %s",strn);
    
    // A copia é feita de strn e que depois da concatenação que vira um só
    strcpy(destino,strn);
    printf("\nPrint da copia: %s",destino);

    



    
    return 0;
}

char *procurar(char *string, char ch){

    while(*string != ch && *string != '\0'){
        string++;
    }

    if(*string != '\0'){
        return string;
    }else{
        return NULL;
    }


}




