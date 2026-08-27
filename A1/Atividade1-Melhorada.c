/*
Adcionei um sistema que verifica se o usuario digitou um numero fora de 0 a 10, caso sim, o programa ira pedir para digitar novamente 
ate que seja digitado um numero valido.
*/

// inclusao da biblioteca Standardio
#include <stdio.h>

int main(){
    float n1,n2,n3;
    /*
    A variavel checagemde3 e utilizada para verificar se o usuario digitou 3 numeros validos, caso sim, a variavel recebe 1, caso nao, 
    recebe 0
    A variavel DentroDoLimite e utilizada para verificar se o usuario digitou um numero valido entre 0 e 10, caso sim, a variavel recebe 1,
    caso nao, recebe 0
    */
    int ChecagemDe3, DentroDoLimite = 0; // recebe 0 para nao previnir erros :)

    do {
    printf("Digite as 3 notas em sequencias e com espacos de 0 a 10. Ex: (8 5 7)\n");
    ChecagemDe3 = scanf("%f %f %f",&n1,&n2,&n3);

    if (ChecagemDe3 != 3){
        printf("\n !ERRO! Voce digitou um valor invalido, nao use letras apenas numeros!\n");
        /*
        Para evitar que o programa entre em loop infinito, caso o usuario digite uma letra, o programa ira limpar o buffer do teclado
        Para que o scanf possa funcionar na proxima vez que o usuario digitar um numero. 
        */
        while(getchar() != '\n');
    }

    // Checagem para saber se os numeros estao dentro do limite de 0 a 10
    else if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10){
        printf("!ERRO! as notas devem estar entre 0 e 10, digite novamente!\n");
    }

    // Caso tudo esteja certo o loop ira terminar
    else {
        DentroDoLimite = 1;
    }
    // O loop continuara caso nada de certo :)
    } while (DentroDoLimite == 0);
    
    float menor = (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);
    float media = (n1 + n2 + n3 - menor) / 2.0;

    printf("Sua media e: %.2f\n", media);
    return 0;
}