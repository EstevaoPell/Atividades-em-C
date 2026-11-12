#include <stdio.h>

int main() {
    int n, num;
    int somaPares = 0, qtdPares = 0;
    int somaImpares = 0, qtdImpares = 0;
    int negativos = 0; // Conta quantas vezes um numero negativo foi digitado

    printf("Digite a quantidade n de numeros positivos a serem lidos: ");
    scanf("%d", &n);

    if (n <= 0) {
        puts("Erro: a quantidade n deve ser maior que zero.");
        return 1;
    }

    // O incremento 'i++' fica no fim do bloco para so avancar quando o numero for valido
    for (int i = 0; i < n; ) {
        printf("Digite o %do numero valido: ", i + 1);
        scanf("%d", &num);

        if (num < 0) {
            negativos++;
            puts("Aviso: numero negativo ignorado!");

            // Na 3a ocorrencia de negativo, encerra o laco definitivamente
            if (negativos == 3) {
                puts("Limite de 3 numeros negativos atingido! Encerrando leitura...");
                break;
            }

            // Volta ao inicio do laco sem executar o 'i++' la embaixo
            continue;
        }

        // Acumula pares e impares normalmente
        if (num % 2 == 0) {
            somaPares += num;
            qtdPares++;
        } else {
            somaImpares += num;
            qtdImpares++;
        }

        i++; // So incrementa o contador de numeros validos se 'num' nao for negativo
    }

    // Exibe as medias com os valores validos coletados ate aqui
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