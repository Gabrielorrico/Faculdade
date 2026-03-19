#include <stdio.h>

void classificar(int *vet, int n, int *positivos, int *negativos, int *zeros);

int main(){
    int n;
    scanf("%d",&n);

    int vet[n];
    for(int i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }

    int positivos;
    int negativos;
    int zeros;
    classificar(vet,n,&positivos,&negativos,&zeros);
    printf("%d",positivos);
    printf("%d",negativos);
    printf("%d",zeros);


}

void classificar(int *vet, int n, int *positivos, int *negativos, int *zeros){
    *positivos = 0;
    *negativos = 0;
    *zeros = 0;

    for(int i=0;i<n;i++){
        if(*(vet + i) > 0){
            *positivos += 1;

        }else if(*(vet + i) < 0){
            *negativos += 1;

        }else{
            *zeros += 1;
        }

    }
    
}