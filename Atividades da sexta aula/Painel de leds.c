#include <stdio.h>

//Declarando as funcoes para arrumar a ordem de leitura do compilador
int totalLEDS(int n);
int ledsAlgarismo(int a);

//Funcao principal que recebe a funcao totalLEDS() para descobrir a quantidade de leds necessarias
int main(){
    int numero, QtdDeLeds;
    printf("Digite o numero que sera representado para o led: ");
    scanf("%d", &numero);

    QtdDeLeds = totalLEDS(numero);
    printf("Voce precisara de: %d leds", QtdDeLeds);
    return 0;
}

//Funcao que calcula a quantidade de leds escritas na funcao principal e converte na quantidade necessaria de leds para comprar
int totalLEDS(int n){
    int soma = 0, digito = 0;
    while (n > 0){
        digito = n % 10;
        soma += ledsAlgarismo(digito);
        n = n/10;
    }
    return soma;
}

//Funcao que devolve a quantidade de leds necessaria para cada numero de 0 a 9
int ledsAlgarismo(int a){
    switch(a){
        case 0:
        case 9:
        case 6:
        return 6;

        case 2:
        case 3:
        case 5:
        return 5;

        case 1:
        return 2;

        case 4:
        return 4;

        case 7:
        return 3;

        case 8:
        return 7;
    }
    return 0;
}