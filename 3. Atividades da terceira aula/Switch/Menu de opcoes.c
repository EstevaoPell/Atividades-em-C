#include <stdio.h>

// Pseudo-constantes para as opcoes do menu
#define OP_PAR_IMPAR 1
#define OP_POSITIVO 2
#define OP_MAIOR_TRES 3
#define OP_MEDIA_MAIORES 4
#define OP_TIPO_CHAR 5
#define OP_SAIR 0

int parOuImpar(int n) {
    return (n % 2 == 0) ? -1 : 1;
}

int ehPositivo(float x) {
    return (x > 0) ? 1 : 0;
}

float maiorDeTres(float a, float b, float c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

float mediaDoisMaiores(float a, float b, float c) {
    float menor = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    return (a + b + c - menor) / 2.0;
}

char tipoCaractere(char c) {
    return (c >= 'a' && c <= 'z') ? 'm' : ((c >= 'A' && c <= 'Z') ? 'M' : '?');
}

int main() {
    int opcao, numInt;
    float r1, r2, r3;
    char caractere;

    do {
        puts("\n=== MENU DE OPERACOES ===");
        puts("1 - Verificar par (-1) ou impar (1)");
        puts("2 - Verificar se racional eh positivo (1) ou nao (0)");
        puts("3 - Maior entre tres racionais");
        puts("4 - Media aritmetica dos dois maiores racionais");
        puts("5 - Classificar caractere ('m', 'M' ou '?')");
        puts("0 - Sair");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case OP_PAR_IMPAR:
                printf("Digite um numero inteiro: ");
                scanf("%d", &numInt);
                printf("Resultado: %d\n", parOuImpar(numInt));
                break;

            case OP_POSITIVO:
                printf("Digite um numero racional: ");
                scanf("%f", &r1);
                printf("Resultado: %d\n", ehPositivo(r1));
                break;

            case OP_MAIOR_TRES:
                printf("Digite tres numeros racionais: ");
                scanf("%f %f %f", &r1, &r2, &r3);
                printf("Maior valor: %.2f\n", maiorDeTres(r1, r2, r3));
                break;

            case OP_MEDIA_MAIORES:
                printf("Digite tres numeros racionais: ");
                scanf("%f %f %f", &r1, &r2, &r3);
                printf("Media dos dois maiores: %.2f\n", mediaDoisMaiores(r1, r2, r3));
                break;

            case OP_TIPO_CHAR:
                printf("Digite um caractere: ");
                // O espaco antes de %c descarta o 'Enter' (\\n) deixado pelo scanf anterior
                scanf(" %c", &caractere);
                printf("Resultado: %c\n", tipoCaractere(caractere));
                break;

            case OP_SAIR:
                puts("Encerrando o programa...");
                break;

            default:
                // Conforme pedido, informa o erro e encerra o programa imediatamente
                puts("Opcao invalida! Encerrando o programa.");
                return 1;
        }
    } while (opcao != OP_SAIR);

    return 0;
}