#include <stdio.h>

// Variavel para os codigos de cores usando array: [0]=R, [1]=G, [2]=B
typedef struct {
    int cores[3];
} tPixel;

// Funcao que soma dois pixels e retorna um novo
tPixel pixelSoma(tPixel p1, tPixel p2) {
    tPixel p3 = {{0}};

    for (int i = 0; i < 3; i++) {
        int soma = p1.cores[i] + p2.cores[i];
        p3.cores[i] = (soma > 255) ? 255 : soma;
    }

    return p3;
}

// Funcao que subtrai dois pixels e retorna um novo
tPixel pixelDif(tPixel p1, tPixel p2) {
    tPixel p3 = {{0}};

    for (int i = 0; i < 3; i++) {
        int dif = p1.cores[i] - p2.cores[i];
        p3.cores[i] = (dif < 0) ? 0 : dif;
    }

    return p3;
}

// Funcao que verifica se a cor e pastel (Candy Color)
int CandyColor(tPixel p) {
    int maior = p.cores[0];
    int menor = p.cores[0];

    for (int i = 1; i < 3; i++) {
        if (p.cores[i] > maior) maior = p.cores[i];
        if (p.cores[i] < menor) menor = p.cores[i];
    }

    return (maior == 255 && menor >= 192 && menor <= 224) ? 1 : 0;
}

int main() {
    tPixel r1 = {{0}}, r2 = {{0}}, resultado = {{0}};
    int opcao = 0;

    puts("Digite o codigo de cor desejado de 0 a 255 para o primeiro pixel no formato R G B:");
    scanf("%d %d %d", &r1.cores[0], &r1.cores[1], &r1.cores[2]);

    puts("Digite o codigo de cor desejado de 0 a 255 para o segundo pixel no formato R G B:");
    scanf("%d %d %d", &r2.cores[0], &r2.cores[1], &r2.cores[2]);

    // Defesa: percorre os 3 indices garantindo valores entre 0 e 255
    for (int i = 0; i < 3; i++) {
        if (r1.cores[i] < 0 || r1.cores[i] > 255 || r2.cores[i] < 0 || r2.cores[i] > 255) {
            puts("Os numeros devem estar entre 0 e 255!");
            return 1;
        }
    }

    printf("\nPixel 1: (%d, %d, %d)\n", r1.cores[0], r1.cores[1], r1.cores[2]);
    printf("Pixel 2: (%d, %d, %d)\n", r2.cores[0], r2.cores[1], r2.cores[2]);

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
                printf("Resultado da soma: (%d, %d, %d)\n",
                       resultado.cores[0], resultado.cores[1], resultado.cores[2]);
                break;

            case 2:
                resultado = pixelDif(r1, r2);
                printf("Resultado da diferenca: (%d, %d, %d)\n",
                       resultado.cores[0], resultado.cores[1], resultado.cores[2]);
                break;

            case 3:
                printf("Pixel 1 (%d, %d, %d): %s\n", r1.cores[0], r1.cores[1], r1.cores[2],
                       CandyColor(r1) ? "E Candy Color (1)" : "Nao e Candy Color (0)");
                printf("Pixel 2 (%d, %d, %d): %s\n", r2.cores[0], r2.cores[1], r2.cores[2],
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