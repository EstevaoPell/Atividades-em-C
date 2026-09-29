#include <stdio.h>
#include <math.h>

/*
Escreva um programa em C que receba como entrada dois números
inteiros x e y, onde x != 0 e y >= 0, e calcule x elevado a y sem usar a função pow().
Utilize o comando de repetição for.
*/

int main() {
    int x, y;
    int sucessoX, sucessoY;
    int tudoCertoX = 0, tudoCertoY = 0;
    
    //Validação
    do {
        printf("Digite um valor para x que seja diferente de 0: ");
        sucessoX = scanf("%d", &x);
        
        if (sucessoX == 0 || x == 0) {
            printf("Erro: O valor de x deve ser um numero diferente de 0.\n\n");
            while(getchar() != '\n');
            tudoCertoX = 0;
        } else {
            tudoCertoX = 1;
        }

        printf("Digite um valor para y que seja igual ou maior a 0: ");
        sucessoY = scanf("%d", &y);
        
        if (sucessoY == 0 || y < 0) {
            printf("Erro: O valor de y deve ser um numero positivo.\n\n");
            while(getchar() != '\n');
            tudoCertoY = 0;
        } else {
            tudoCertoY = 1;
        }
        
    } while (tudoCertoX == 0 || tudoCertoY == 0);

    //Cálculo com FOR
    long long resultado = 1; 
    
    for (int i = 0; i < y; i++) {
        resultado = resultado * x;
    }

    printf("O resultado de %d elevado a %d e: %lld\n", x, y, resultado);

    return 0;
}