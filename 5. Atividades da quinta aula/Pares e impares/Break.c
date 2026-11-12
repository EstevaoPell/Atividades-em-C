#include <stdio.h>

int main() {
    int n, num;
    int somaPares = 0, qtdPares = 0;
    int somaImpares = 0, qtdImpares = 0;

    printf("Digite a quantidade n de numeros positivos a serem lidos: ");
    scanf("%d", &n);

    if (n <= 0) {
        puts("Erro: a quantidade n deve ser maior que zero.");
        return 1;
    }

    // Le ate n numeros inteiros
    for (int i = 0; i < n; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &num);

        // Se ler um numero negativo, avisa e interrompe o laco imediatamente
        if (num < 0) {
            puts("Aviso: numero negativo lido! Interrompendo a leitura...");
            break;
        }

        // Separa a soma e a contagem entre pares e impares
        if (num % 2 == 0) {
            somaPares += num;
            qtdPares++;
        } else {
            somaImpares += num;
            qtdImpares++;
        }
    }

    // Calcula e exibe as medias apenas se houver pelo menos um numero daquele tipo
    if (qtdPares > 0) {
        printf("media dos pares = %.2f\n", (float)somaPares / qtdPares);
    } else {
        puts("Nenhum numero par foi coletado.");
    }

    if (qtdImpares > 0) {
        printf("media dos impares = %.2f\n", (float)somaImpares / qtdImpares);
    } else {
        puts("Nenhum numero impar foi coletado.");
    }

    return 0;
}