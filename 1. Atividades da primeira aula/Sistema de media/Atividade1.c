/*
Escreva um programa que receba 3 notas e retorne a media das duas maiores
*/

// inclusao da biblioteca Standardio
#include <stdio.h>

int main(){
    float n1,n2,n3;
    printf("Digite as 3 notas em sequencias e com espacos. Ex: (8 5 7)\n");
    scanf("%f %f %f",&n1,&n2,&n3);

    // Utilizacao de ternario para nao ter que escrever um textao com if dentro de if
    float menor = (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);
    /* Como funciona este ternario?
    Se n1 for menor que n2, entao verifica se n1 e menor que n3, se sim, menor = n1, senao menor = n3
    Se n1 nao for menor que n2, entao verifica se n2 e menor que n3, se sim, menor = n2, senao menor = n3
    */

    // Calculo da media apos receber o valor da variavel menor
    float media = (n1 + n2 + n3 - menor) / 2.0;

    printf("Sua media e: %.2f\n", media);
    return 0;
}