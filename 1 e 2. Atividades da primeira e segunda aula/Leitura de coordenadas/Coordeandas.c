#include <stdio.h>

int main() {
    // dicionario de dados
    int x, y;

    // corpo do programa
    printf("Digite as coordenadas x e y: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("Eixo x e eixo y\n");
    } else if (x == 0) {
        printf("Eixo y\n");
    } else if (y == 0) {
        printf("Eixo x\n");
    } else if (x > 0 && y > 0) {
        printf("Quadrante 1\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrante 2\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrante 3\n");
    } else {
        printf("Quadrante 4\n");
    }

    return 0;
}