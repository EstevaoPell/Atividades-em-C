#include <stdio.h>

int main() {
    int linhas;

    printf("Digite o numero de linhas (1 a 10): ");
    scanf("%d", &linhas);

    // Defesa: barra valores menores que 1 ou maiores que 10
    if (linhas <= 0 || linhas > 10) {
        puts("Erro: o numero de linhas deve estar entre 1 e 10.");
        return 1;
    }

    // Laco externo: controla a quantidade de asteriscos da linha atual (comeca no maximo e diminui)
    while (linhas > 0) {
        int colunas = 0;

        // Laco interno: imprime 'linhas' asteriscos lado a lado
        while (colunas < linhas) {
            printf("*");
            colunas++;
        }

        printf("\n"); // Quebra a linha apos imprimir todos os asteriscos dela
        linhas--;     // Reduz em 1 o total de asteriscos para a proxima linha
    }

    return 0;
}