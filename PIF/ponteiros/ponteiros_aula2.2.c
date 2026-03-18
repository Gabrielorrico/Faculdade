#include <stdio.h>

void VetorParidade(int *N ,int *V, int *P);

int main(){

    
    int N;
    scanf("%d",&N);
    
    int P[N];
    int V[N];
    for(int i=0;i<N;i++){
        scanf("%d",&V[i]);
    }

    VetorParidade(&N,&V,&P);

    

}

void VetorParidade(int *N ,int *V, int *P){

    for(int i = 0;i < *N; i++){
        if(V[i]%2 == 0){
            P[i] = 0;
        }else{
            P[i] = 1;
        }
    }
    
    printf("\n===============\n");

    for(int i = 0;i < *N; i++){
        printf(" %d",*(V+i));
    }

    printf("\n===============\n");

    for(int i = 0;i < *N; i++){
        printf(" %d",P[i]);

    }
}