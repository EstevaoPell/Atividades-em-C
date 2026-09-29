#include <stdio.h>

int main() {
    char simbolo;
    printf("Digite um caractere.\n");
    scanf ("%c", &simbolo);
    switch(simbolo) {
    case '!':
        printf("Exclamacao.\n");
        break;
    case '?':
        printf("Interrogacao.\n");
        break;
    /*
    case '@':
        printf("O proximo simbolo eh %c.\n", simbolo + 2);
        Resposta: o print do @ seria "a" porque estamos somando uma variavel 0 com + 1 (1 = a no alfabeto), alem disso
        mostra tambem a mensagem "Simbolo qualquer" porque nao tem um break neste case, logo o codigo ja le o default junto.
    */
    case '@':
        printf("Arroba.\n");
        break;
    default:
        printf("Simbolo qualquer.\n");
    }
    return 0;
}