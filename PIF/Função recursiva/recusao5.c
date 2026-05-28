#include <stdio.h>
#include <stdlib.h>

int mdc(int a,int b){

    if(a%b == 0){
        return b;
    }

    return mdc(b,a%b);
 
}

int main() {

    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    int resultado = mdc(a,b);
    printf("%d", resultado);
    
    return 0;
}