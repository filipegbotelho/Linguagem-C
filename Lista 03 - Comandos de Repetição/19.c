/* Escreva um algoritmo que leia um n�mero inteiro entre 100 e 999 e imprima na sa�da
cada um dos algarismos que comp�oem o n�mero */
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
