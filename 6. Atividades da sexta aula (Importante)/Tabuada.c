#include <stdio.h>
/*
Escreva um programa que lê do teclado um número entre 1 e 10 e o utilize como parâmetro de entrada da função “tabuada”.
Sua função “tabuada” deverá imprimir em ordem crescente todas as multiplicações do número de entrada por valores entre 1 e 10 
e não retornar nenhum valor para a main().
*/

//Declarando a funcao tabuada para padronizacao
void tabuada(int n);

//Funcao pricipal
int main(){
    int valor, valorRecebido;
    printf("Digite um numero inteiro para ser calculado de uma multiplicacao de 1 ate 10: ");
    scanf("%d", &valor);
    
    tabuada(valor);

    return 0;
}

//Funcao tabuada como void para nao ter retornos :D
void tabuada(int n){
    int multiplicador = 1;
    int resultado;
    while (multiplicador <= 10){
        resultado = multiplicador * n;
        printf("%d x %d = %d\n", n, multiplicador, resultado);
        multiplicador++;
    }
}