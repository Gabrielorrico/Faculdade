#include <stdio.h>
#include <stdlib.h>

int soma(n){

    if(n == 0){
        return 0;
    }

    return n + soma(n-1);
}

int main() {

    int n;
    scanf("%d",&n);

    int somando = soma(n);
    printf("%d",somando);
    
    return 0;
}