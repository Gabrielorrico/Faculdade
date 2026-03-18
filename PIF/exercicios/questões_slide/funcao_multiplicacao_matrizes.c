#include <stdio.h>

void multiplicacao_matriz(int N, int mat_a[N][N], int mat_b[N][N], int mat_c[N][N]);

void printMatriz(int N, int mat_c[N][N]);

int main(){

    int N;
    int mat_a[3][3];
    int mat_b[3][3];
    int mat_c[3][3];

    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            printf("insira o valor [%d][%d]: ", i,j);
            scanf("%d", &mat_a[i][j]);

        }
    }

    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            printf("insira o valor [%d][%d]: ", i,j);
            scanf("%d", &mat_b[i][j]);
            
        }
    }


    multiplicacao_matriz(3,mat_a,mat_b,mat_c);
    printMatriz(3,mat_c);


}

void multiplicacao_matriz(int N ,int mat_a[3][3], int mat_b[3][3], int mat_c[3][3]){

    int N;

    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){    
            mat_c[i][j] = 0;  
            for( int k=0;k<3;k++){
                mat_c[i][j] += mat_a[k][j] * mat_b[i][k];
            }
        }
    }

    
    
}

void printMatriz(int N, int mat_c[N][N]){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%3d", mat_c[i][j]);
        }
        printf("\n");
    }

}
