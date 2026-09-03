#include <stdio.h>

int main(){
    int a;
    int resposta;
    const int impar = 1;
    const int par = -1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    resposta = (a%2==0) ? par : impar;
    printf("Seu numero se enquadra como %d\n", resposta);
    return 0;
}