#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*7. Concatenação de strings com alocação dinâmica
Escreva um programa que:
• leia duas strings
• aloque dinamicamente uma terceira string com tamanho suficiente para armazenar a concatenação das duas
• copie manualmente os caracteres
• adicione o terminador '\0'
• imprima a string resultante
• libere a memória
Restrições:
• não usar strcat
• não usar strcpy*/

char *criar_string(int n);

int main() {
    char str1[100];
    char str2[100];

    fgets(str1,99,stdin);
    fgets(str2,99,stdin);
    str1[strcspn(str1,"\n")] = '\0';
    str2[strcspn(str2,"\n")] = '\0';
    
    int tamanho_str1 = strlen(str1);
    int tamanho_str2 = strlen(str2);
    int n = strlen(str1) + strlen(str2);

    char *string = criar_string(n);
    //aaaaaaaaaa
    //bbb
    //aaaaaaaaaabbb

    int i;
    for(i=0;i<tamanho_str1;i++){
        string[i] = str1[i];
    }

    for (int j = 0; j < tamanho_str2; j++) {
        string[i + j] = str2[j];
    }

    string[n] = '\0';

    printf("%s",string);

    free(string);
        
    return 0;
}

char *criar_string(int n){
    char *string;
    string = (char *)malloc(n+1*sizeof(char));
    return string;
}
