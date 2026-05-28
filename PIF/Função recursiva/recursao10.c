#include <stdio.h>
#include <stdlib.h>

void imprimir_inverso(int arr[], int i, int n) {
    if (i >= n) return;

    imprimir_inverso(arr, i + 1, n);
  
    printf("%d\n", arr[i]);
}

int main() {
    
    int vetor[5] = {1,2,3,10,7};
    
    imprimir_inverso(vetor, 0, 5);
    

    return 0;
}