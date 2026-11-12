#include <stdio.h>

// Variavel para os codigos de cores
typedef struct {
    int r, g, b;
} tPixel;

// Função que soma dois pixels e retorna um novo
tPixel pixelSoma(tPixel p1, tPixel p2) {
    tPixel p3 = {0};

    // Soma dos 2 pixels para um novo com limite de 255.
    int somaR = p1.r + p2.r;
    p3.r = (somaR > 255) ? 255 : somaR;

    int somaG = p1.g + p2.g;
    p3.g = (somaG > 255) ? 255 : somaG;

    int somaB = p1.b + p2.b;
    p3.b = (somaB > 255) ? 255 : somaB;

    return p3;
}

// Função que subtrai dois pixels e retorna um novo
tPixel pixelDif(tPixel p1, tPixel p2) {
    tPixel p3 = {0};

    // Subtrai do primeiro pixel pro segundo, sem ter pixel negativo.
    int difR = p1.r - p2.r;
    p3.r = (difR < 0) ? 0 : difR;

    int difG = p1.g - p2.g;
    p3.g = (difG < 0) ? 0 : difG;

    int difB = p1.b - p2.b;
    p3.b = (difB < 0) ? 0 : difB;

    return p3;
}

int CandyColor(tPixel p) {
    // Descobre o maior valor real entre r, g e b
    int maior = (p.r > p.g) ? p.r : p.g;
    maior = (p.b > maior) ? p.b : maior;

    // Descobre o menor valor real entre r, g e b
    int menor = (p.r < p.g) ? p.r : p.g;
    menor = (p.b < menor) ? p.b : menor;

    return (maior == 255 && menor >= 192 && menor <= 224) ? 1 : 0;
}

int main() {
    tPixel r1 = {0}, r2 = {0}, resultado = {0};
    int opcao = 0;

    puts("Digite o codigo de cor desejado de 0 a 255 para o primeiro pixel no formato R G B:");
    scanf("%d %d %d", &r1.r, &r1.g, &r1.b);

    puts("Digite o codigo de cor desejado de 0 a 255 para o segundo pixel no formato R G B:");
    scanf("%d %d %d", &r2.r, &r2.g, &r2.b);

    // Defesa: garante que todos os valores estejam entre 0 e 255
    if (r1.r < 0 || r1.r > 255 || r1.g < 0 || r1.g > 255 || r1.b < 0 || r1.b > 255 ||
        r2.r < 0 || r2.r > 255 || r2.g < 0 || r2.g > 255 || r2.b < 0 || r2.b > 255) {
        puts("Os numeros devem estar entre 0 e 255!");
        return 1;
    }

    printf("\nPixel 1: (%d, %d, %d)\n", r1.r, r1.g, r1.b);
    printf("Pixel 2: (%d, %d, %d)\n", r2.r, r2.g, r2.b);

    do {
        puts("\n=== MENU DE OPERACOES ===");
        puts("1 - Somar os dois pixels (pixelSoma)");
        puts("2 - Subtrair os dois pixels (pixelDif)");
        puts("3 - Verificar se os pixels sao Candy Color");
        puts("0 - Sair");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                resultado = pixelSoma(r1, r2);
                printf("Resultado da soma: (%d, %d, %d)\n", resultado.r, resultado.g, resultado.b);
                break;

            case 2:
                resultado = pixelDif(r1, r2);
                printf("Resultado da diferenca: (%d, %d, %d)\n", resultado.r, resultado.g, resultado.b);
                break;

            case 3:
                printf("Pixel 1 (%d, %d, %d): %s\n", r1.r, r1.g, r1.b,
                       CandyColor(r1) ? "E Candy Color (1)" : "Nao e Candy Color (0)");
                printf("Pixel 2 (%d, %d, %d): %s\n", r2.r, r2.g, r2.b,
                       CandyColor(r2) ? "E Candy Color (1)" : "Nao e Candy Color (0)");
                break;

            case 0:
                puts("Encerrando o programa...");
                break;

            default:
                puts("Opcao invalida! Tente novamente.");
                break;
        }
    } while (opcao != 0);

    return 0;
}