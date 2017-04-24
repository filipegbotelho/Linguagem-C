/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real, e char. Associe as vari�veis aos ponteiros (use &). Modifique os valores de
cada vari�vel usando os ponteiros. Imprima os valores das vari�veis antes e ap�s a
modifica��o. */
#include <stdio.h>

void Funcao (int *n, float *num, char *nome){
    *n += 10;
    *num += 5.3;
    *nome += 1;
}

int main(void){
    int n = 10;
    float num = 20.5;
    char nome = 'F';

    printf("Antes da funcao: \n");
    printf("Numero intero: %i\n", n);
    printf("Numero real: %.2f\n", num);
    printf("Caractere: %c\n\n", nome);
    Funcao(&n, &num, &nome);
    printf("Depois da funcao: \n");
    printf("Numero intero: %i\n", n);
    printf("Numero real: %.2f\n", num);
    printf("Caractere: %c\n", nome);


    return 0;
}
