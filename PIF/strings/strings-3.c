#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = {0};
    int i = 0;
    char c;
    int num=0,letra=0,especial=0;

    while ((c=getchar()) != '\n') {
        if(c >='0' && c<='9'){
            num++;
        }else if((c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z')){
            letra++;

        }else{
            especial++;
        }

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
            c = 'i';
        }

        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ){
            c = 'I';
        }

        str[i] = c;
        i++;
    }

    printf("A string tem (%d) numero(s)!\n",num);
    printf("A string tem (%d) letra(s)!\n",letra);
    printf("A string tem (%d) caractere(s) especiai(s)!\n",especial);
    printf("Frase modificada: %s",str);



    return 0;
}