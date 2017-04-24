/* Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saída
cada um dos algarismos que comp˜oem o número */
#include <stdio.h>

int main(void){
    int i;
    char numero[4];
    printf("Digite um numero entre 100 e 999: ");
    gets(numero);
    printf("Numero que o compoem: ");
    for (i = 0; i < 4; i++)
        printf("%c ", numero[i]);

    return 0;
}
