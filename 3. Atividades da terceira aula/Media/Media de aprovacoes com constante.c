#include <stdio.h>

int main() {
    // Declara o limiar de aprovacao como uma constante verdadeira em memoria
    const float LIMIAR_APROVACAO = 5.0;
    float nota1, nota2, media;

    printf("Digite as duas notas: ");
    scanf("%f %f", ¬a1, ¬a2);

    // Calcula a media aritmetica simples
    media = (nota1 + nota2) / 2.0;

    // Compara a media obtida com a constante
    if (media >= LIMIAR_APROVACAO) {
        puts("Aprovado");
    } else {
        puts("Reprovado");
    }

    return 0;
}