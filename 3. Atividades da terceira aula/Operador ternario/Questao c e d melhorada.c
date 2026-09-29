#include <stdio.h>

int main(){
    float a, b, c, maior, meio, menor, media;
    int ChecagemDeNumeros, DentroDoLimite = 0;

    do {
    printf("Digite 3 valores fracionario: ");
    ChecagemDeNumeros = scanf("%f %f %f", &a, &b, &c);

    if (ChecagemDeNumeros != 3){
        printf("\n !ERRO! Voce digitou um valor invalido, nao use letras apenas numeros!\n");
        while(getchar() != '\n');
    } else if (a < 0 || a > 10 || b < 0 || b > 10 || c < 0 || c > 10){
        printf("!ERRO! as notas devem estar entre 0 e 10, digite novamente!\n");
    } else {
        DentroDoLimite = 1;
    }
    } while (DentroDoLimite == 0);

    maior = (a>b && a>c) ? a : (b>c) ? b : c;
    menor = (a<b && a<c) ? a : (b<c) ? b : c;
    meio = (a + b + c - maior - menor);
    media = (maior + meio) / 2;

    printf("Seu maior numero eh %.1f, e sua media dos dois maiores valores eh %.1f\n", maior, media);
    return 0;
}