#include <stdio.h>
#include <string.h>

char *cifra(char *str,int deslocamento);

int main() {

    char str[50];
    fgets(str,49,stdin);

    str[strcspn(str, "\n")] = '\0';

    int deslocamento = 0;
    scanf("%d", &deslocamento);

    char *res = cifra(str, deslocamento); 
    printf("A modificacao apos cifra de cesar e: %s", res);


    return 0;
}


char *cifra(char *str,int deslocamento) {
    char *inicio = str;

    while (*str != '\0'){
            *str = *str + deslocamento;
            str++;
        }
    return inicio;
}