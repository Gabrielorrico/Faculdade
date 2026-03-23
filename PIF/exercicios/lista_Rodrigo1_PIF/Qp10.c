#include <stdio.h>

int eh_palindromo_estrito(char *str);

int main() {
    char str[100];
    scanf("%99[^\n]",str);

    int resultado = eh_palindromo_estrito(str);
    printf("%d",resultado);
    
    return 0;
}

int eh_palindromo_estrito(char *str){
    char *inicio = str;
    char *fin = str;

    while (*fin != '\0'){
        fin++;
    }
    
    while (*inicio != '\0'){
        if(*inicio >= 'A' && *inicio <= 'Z'){
            *inicio = *inicio - 32;
            if(*inicio >= 'a' && *inicio <= 'z'){
                if(*inicio != *fin){
                    return 0;
                }
            }
        }
        inicio++;
        fin--;
    }
    return 1;

}