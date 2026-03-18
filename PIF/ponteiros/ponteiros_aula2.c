#include <stdio.h>

void Swap(int *a, int *b);

int main(){
    int a = 2;
    int b = 3;

    printf("valores antigos(%d,%d)",a,b);
    Swap(&a,&b);
    printf("valores depois da funcao swap(%d,%d)",a,b);

    
}

void Swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}