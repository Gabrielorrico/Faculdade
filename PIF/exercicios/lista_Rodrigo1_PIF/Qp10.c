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

    fin--;
    
    while (inicio < fin){

        
        if(*inicio >= 'A' && *inicio <= 'Z'){
            *inicio = *inicio + 32;
        }
        if(*fin >= 'A' && *fin <= 'Z'){
            *fin = *fin + 32; 
        }

        if(!(*inicio >= 'a' && *inicio <= 'z')){
        inicio++;
        continue;
        }

        if(!(*fin >= 'a' && *fin <= 'z')){
        fin--;
        continue;
        }

        if(*inicio != *fin){
            return 0;
        }

        inicio++;
        fin--;
    }
    return 1;

}