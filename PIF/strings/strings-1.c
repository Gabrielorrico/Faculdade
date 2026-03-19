#include <stdio.h>
#include <string.h>



int main() {
    int z = 0;
    char str[3];
    int x = 0;
    scanf("%s",str);
    
    printf("String: %s\n", str);
    printf("X = %d\n",x);
    printf("Z = %d\n",z);
    printf("End str = %p\n",str);
    printf("End X = %p\n",&x);
    printf("End Z = %p\n",&z);
    return 0;
}

