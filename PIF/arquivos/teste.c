#include <stdio.h>

int main() {
    FILE *fp;

    // --- ESCRITA ---
    fp = fopen("teste.txt", "w");  // cria ou sobrescreve

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(fp, "Olá, arquivo!\n");
    fprintf(fp, "Segunda linha.\n");

    fclose(fp);  // SEMPRE fechar!

    // --- LEITURA ---
    fp = fopen("teste.txt", "r");  // abre para leitura

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char linha[100];
    while (fgets(linha, sizeof(linha), fp) != NULL) {
        printf("%s", linha);  // imprime cada linha
    }
    fclose(fp);

    return 0;
}