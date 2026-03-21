    #include <stdio.h>
    #include <string.h>

    void conta_caractere(char *str, int *vogais,int *consoantes);

    int main(){
        int vogal = 0;
        int consoante = 0;
        char str[100];

        fgets(str,99,stdin);

        conta_caractere(str,&vogal,&consoante);
        printf("A quantidade de vogais na linha e: %d\n",vogal);
        printf("A quantidade de consoantes na linha e: %d",consoante);

    }

    void conta_caractere(char *str, int *vogais,int *consoantes){

        while (*str != '\0'){
            if(*str >= 'a' && *str <= 'z'){
                if(*str != 'a' && *str != 'e' && *str != 'i' && *str != 'o' && *str != 'u'){
                (*consoantes)++;
                }else{
                    (*vogais)++;

                }
            }
            str++;
        }
        

    }

