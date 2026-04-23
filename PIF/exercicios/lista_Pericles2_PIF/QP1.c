#include <stdio.h>
#include <stdlib.h>

int **matInv(int** mat,int n,int m);

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int **mat = (int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        mat[i] = (int *)malloc(m*sizeof(int));
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",mat[i][j]);
        }
    }
    
    return 0;
}

int **matInv(int** mat,int n,int m);