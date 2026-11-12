#include <stdio.h>

int main() {
    float a, b;
    char operador;

    printf("Digite uma operacao aritmetica entre dois numeros a e b, no formato \"a <operacao> b\":\n");
    scanf("%f %c %f", &a, &operador, &b);

    // Avalia o caractere do operador lido e direciona para o calculo correspondente
    switch (operador) {
        case '+':
            printf("%.2f\n", a + b);
            break;

        case '-':
            printf("%.2f\n", a - b);
            break;

        case '/':
            // Protecao contra divisao por zero
            if (b != 0) {
                printf("%.2f\n", a / b);
            } else {
                puts("Erro: divisao por zero.");
            }
            break;

        case '*':
            printf("%.2f\n", a * b);
            break;

        default:
            puts("Operador nao definido.");
            break;
    }

    return 0;
}