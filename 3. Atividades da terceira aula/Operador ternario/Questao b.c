#include <stdio.h>

int main(){
    float a;
    int resposta;
    const int positivo = 1;
    const int negativo = 0;

    printf("Digite um valor fracionario: ");
    scanf("%f", &a);

    resposta = (a>=0) ? positivo : negativo;
    printf("Seu numero se enquadra como %d\n", resposta);
    return 0;
}