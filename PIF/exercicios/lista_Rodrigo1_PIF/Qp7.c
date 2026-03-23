#include <stdio.h>

int contemSubstring(char *str, char *sub);

int main() {
    char str[100];
    fgets(str,99,stdin);

    char sub[100];
    fgets(sub,99,stdin);

    int resultado = contemSubstring(str,sub);
    printf("%d\n",resultado);

    
    return 0;
}

int contemSubstring(char *str, char *sub){
    int cont_true;

    int tamanho_str = 0;
    int tamanho_sub = 0;

    while(str[tamanho_str] != '\0' && str[tamanho_str] != '\n') tamanho_str++;
    while(sub[tamanho_sub] != '\0' && sub[tamanho_sub] != '\n') tamanho_sub++;
    
   
    for(int i=0;i<tamanho_str;i++){
        cont_true = 0;
        for(int j=0;j<tamanho_sub;j++){
            if(*(sub + j) == *(str + j + i)){ 
                cont_true++;
            }
        }
        if(cont_true == tamanho_sub){
            return 1;
        }
    }
    return 0;
}