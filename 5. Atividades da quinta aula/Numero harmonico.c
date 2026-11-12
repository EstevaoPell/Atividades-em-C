#include <stdio.h>

int main() {
    int n;
    double H = 0.0; // Acumulador em ponto flutuante para manter precisao nas fracoes

    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    // Defesa: a serie harmonica exige n >= 1
    if (n <= 0) {
        puts("Erro: n deve ser um inteiro maior que zero.");
        return 1;
    }

    // Soma cada termo 1/k de k = 1 ate n
    for (int k = 1; k <= n; k++) {
        H += 1.0 / k;
    }

    printf("H_%d = %.5f\n", n, H);

    return 0;
}