/* Faça um programa que some todos os números naturais abaixo de 1000 que s˜ao múltiplos
de 3 ou 5. */
#include <stdio.h>

int main(void){
    int i, soma;
    for (soma = i = 0; i < 1000; i++){
        if (i%3 == 0 || i%5 == 0)
            soma += i;
    }
    printf("Soma: %i\n", soma);


    return 0;
}
