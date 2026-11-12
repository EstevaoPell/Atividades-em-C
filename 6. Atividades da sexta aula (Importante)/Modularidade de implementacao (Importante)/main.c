#include <stdio.h>
#include "teste.h" // Inclui a assinatura da funcao multiplica()

int main() {
    int a = 3, b = 2, res;

    // Chama a funcao implementada em teste.c
    res = multiplica(a, b);
    printf("res = %d\n", res);

    return 0;
}