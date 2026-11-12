#include <stdio.h>

int main() {
    char letra, cifra;
    int totalCifradas = 0;

    printf("Digite uma letra: ");
    // O espaco antes de %c evita ler o 'Enter' (\\n) deixado no buffer do teclado
    scanf(" %c", &letra);

    // Repete enquanto for uma letra do alfabeto E o total ja cifrado anteriormente for <= 3
    while (((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) && totalCifradas <= 3) {
        if (letra >= 'A' && letra <= 'Z') {
            // Desloca 12 posicoes dentro das 26 letras maiusculas
            cifra = 'A' + (letra - 'A' + 12) % 26;
        } else {
            // Desloca 12 posicoes dentro das 26 letras minusculas
            cifra = 'a' + (letra - 'a' + 12) % 26;
        }

        printf("A cifra de %c eh %c\n", letra, cifra);
        totalCifradas++; // Incrementa o contador de letras cifradas

        // Solicita a proxima letra somente se ainda estiver dentro do limite
        if (totalCifradas <= 3) {
            printf("Digite uma nova letra: ");
            scanf(" %c", &letra);
        }
    }

    // Se saiu do laco porque o ultimo caractere digitado nao era uma letra
    if (!((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))) {
        puts("Caractere invalido.");
    }

    return 0;
}