#include <stdio.h>

int main(){
    float a, b, c, maior, meio, menor, media;

    printf("Digite 3 valores fracionario: ");
    scanf("%f %f %f", &a, &b, &c);

    maior = (a>b && a>c) ? a : (b>c) ? b : c;
    menor = (a<b && a<c) ? a : (b<c) ? b : c;
    meio = (a + b + c - maior - menor);
    media = (maior + meio) / 2;

    printf("Seu maior numero eh %.1f, e sua media dos dois maiores valores eh %.1f\n", maior, media);
    return 0;
}