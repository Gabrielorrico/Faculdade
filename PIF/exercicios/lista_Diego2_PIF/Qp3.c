#include <stdio.h>

void classificar(int n, int (*m)[n]);

int main(){
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    classificar(n,mat);

}

void classificar(int n, int (*m)[n]){
    int temp[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            *(*(temp + i) + j) = *(*(m + j) + i);
            
        }
    }

    printf("TRANSPOSTA\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d", *(*(temp + i) + j));
            
        }
        printf("\n");
    }


}