#include <stdio.h>
#include <string.h>

void paraMaiusculas(char *str);

int main() {
    char str[100];
    fgets(str,99,stdin);

    str[strcspn(str,"\n")] = '\0';

    paraMaiusculas(str);
    printf("%s",str);
    
    return 0;
}

void paraMaiusculas(char *str){
    while (*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            // a constante sempre é dada pela diferença dos termos ('a' - 'A') = 32,('a' + 'A') = 64 isso de minusculo para maisculo 
            *str = *str - 32;

        }
        str++;
    }

}