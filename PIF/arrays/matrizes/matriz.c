#include <stdio.h>

int main(){
    int a[2][2];
    int m[2][2];
    int t[2][2];
    int s[2][2];

    // preencher matriz a
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            scanf("%d", &a[i][j]);
            t[j][i] = a[i][j];
        }
    }

    //preencher a matriz m
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            scanf("%d", &m[i][j]);

        }
    }

    //soma de matriz
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            s[i][j] = a[i][j] + m[i][j];

        }
    }




    //printa matriz a
    printf("PRINT MATRIZ A\n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            //printf("a[%d][%d] = %d\n", i, j, a[i][j]); printa na posi��o normal

            //printa no formato de uma matriz
            printf("[%d]", a[i][j]);
        }
        printf("\n");

    }

    // printa a matriz t (transposta)

    printf("\n");
    printf("PRINT MATRIZ TRANSPOSTA\n");

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){

            printf("[%d]", t[i][j]);
        }
        printf("\n");

    }

    //printa a matriz s (soma)
    printf("\n");
    printf("MATRIZ SOMA\n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){

            printf("[%d]", s[i][j]);
        }
        printf("\n");

    }


}




