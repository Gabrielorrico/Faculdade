#include <stdio.h>

int main(){

    int mat[3][3];
    int V[3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                V[i] = mat[i][j];
            }
        }
    }

    for(int i=0;i<3;i++){
        printf("%d", V[i]);
    }
}