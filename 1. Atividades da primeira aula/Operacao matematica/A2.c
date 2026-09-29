/*
Uma curiosa propriedade matemática que um número inteiro N de 3 dígitos pode vir
a possuir é a seguinte: n = a³ + b³ + c³, onde a, b e c são os dígitos de N. Por exemplo, 153 = 1³ + 5³ + 3³.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, centenas, dezenas, unidades, soma_cubos;

    printf("Escreva um numero inteiro de 3 digitos:\n");
    scanf("%d", &n);

    if (n < 100 || n > 999){
        printf("O valor digitado deve-ser um numero inteiro de apenas 3 digitos!\n");
        return 1;
    }

    centenas = (n / 100);
    dezenas = (n / 10) % 10;
    unidades = (n % 10);

    soma_cubos = pow(centenas, 3) + pow(dezenas, 3) + pow(unidades, 3);
    if (soma_cubos == n){
        printf("SIM! O numero %d satisfaz a relacao (%d = %d^3 + %d^3 + %d^3).\n", n, n, centenas, dezenas, unidades);
    } else {
        printf("NAO. O numero %d nao possui a propriedade (Soma dos cubos: %d).\n", n, soma_cubos);
    }
    return 0;
}