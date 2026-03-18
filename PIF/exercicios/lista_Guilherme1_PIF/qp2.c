#include <stdio.h>

void getProdDiagprinc_secund_cent(int mat[3][3]);

int main(){

    int mat[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    getProdDiagprinc_secund_cent(mat);
}

void getProdDiagprinc_secund_cent(int mat[3][3]){

    int mult_principal = 1;
    int mult_secundario = 1;
    int mult_colunaCentral = 1;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                mult_principal *= mat[i][j];
            }
            if(i+j==3-1){
                mult_secundario *= mat[i][j];
            }
            if(j==1){
                mult_colunaCentral *= mat[i][j];
            }
        }
    }

    //1 2 3
    //4 5 6
    //7 8 9

    printf("\n%d",mult_principal);
    printf("\n%d",mult_secundario);
    printf("\n%d",mult_colunaCentral);
}