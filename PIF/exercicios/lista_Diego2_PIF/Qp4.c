#include <stdio.h>

int matriz_simetrica(int n, int (*m)[n]);

int main(){
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int resultado;
    resultado = matriz_simetrica(n,mat);
    printf("%d",resultado);

}

int matriz_simetrica(int n, int (*m)[n]){
    int temp[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[j][i] = *(*(m + i) + j);
            
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(temp[i][j] != *(*(m + i) + j)){
                return 0;
            }
        }
    }

    return 1;
}