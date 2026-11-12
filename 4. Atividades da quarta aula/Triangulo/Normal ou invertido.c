#include <stdio.h>

int main() {
    int n;

    printf("Digite o numero de linhas (-10 a 10, diferente de 0): ");
    scanf("%d", &n);

    // Defesa: garante que o valor esteja no intervalo [-10, 10] e nao seja zero
    if (n == 0 || n < -10 || n > 10) {
        puts("Erro: informe um valor entre -10 e 10 (diferente de 0).");
        return 1;
    }

    if (n > 0) {
        // Caso positivo: imprime de 'n' asteriscos ate 1 (decrescente)
        while (n > 0) {
            int col = 0;
            while (col < n) {
                printf("*");
                col++;
            }
            printf("\n");
            n--;
        }
    } else {
        // Caso negativo: converte para positivo e imprime de 1 ate 'totalLinhas' (crescente)
        int totalLinhas = -n;
        int linhaAtual = 1;

        while (linhaAtual <= totalLinhas) {
            int col = 0;
            while (col < linhaAtual) {
                printf("*");
                col++;
            }
            printf("\n");
            linhaAtual++;
        }
    }

    return 0;
}