#include <stdio.h>

int main() {
    
    int matriz_a[2][2];
    int matriz_b[2][2];
    int matriz_c[2][2];
    
    int i, j, k;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor matrizA[%d][%d] = ",i,j);
            scanf("%d", &matriz_a[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor matrizB[%d][%d] = ",i,j);
            scanf("%d", &matriz_b[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matriz_c[i][j] = 0; 
        }
    }
    //[a][b]  [w][x] [00][01]
    //[c][d]  [y][z] [10][11]

    // (a*w) (b*y) (c*x) (d*y)

    //[a*w + b*y][a*x + b*x]
    //[c*w + d*y][c*x + d*z]

    //coluna de A tem que ser igual a linha de B
    //O resultado é linha de A coluna de B
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++) {
                matriz_c[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
            
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", matriz_c[i][j]); //adicionei um espacinho ao lado o "%d "
            
        }
        printf("\n");
    }

    return 0; //adicionei o return 0
}
