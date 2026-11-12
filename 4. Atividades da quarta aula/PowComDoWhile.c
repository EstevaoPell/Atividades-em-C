#include <stdio.h>

int main() {
    int x, y;
    int resultado = 1; // Comeca em 1 porque eh o elemento neutro da multiplicacao
    int contador = 0;

    printf("Digite a base inteira x (x != 0) e o expoente y (y >= 0): ");
    scanf("%d %d", &x, &y);

    // Defesa: garante que x nao seja zero e y nao seja negativo
    if (x == 0 || y < 0) {
        puts("Erro: x deve ser diferente de 0 e y deve ser maior ou igual a 0.");
        return 1;
    }

    // Se y > 0, multiplica 'resultado' por 'x' exatamente 'y' vezes usando do-while
    if (y > 0) {
        do {
            resultado = resultado * x;
            contador++;
        } while (contador < y);
    }

    printf("%d elevado a %d = %d\n", x, y, resultado);

    return 0;
}