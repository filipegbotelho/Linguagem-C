/* Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz
quadrada do n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o
n�mero � inv�lido. */
#include <stdio.h>
#include <math.h>
int main(void){

    int numero;
    float raiz;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    raiz = (float)sqrt(numero);
    if (numero > 0)
        printf("Raiz quadrada: %.2f", raiz);
    else if (numero < 0)
        printf("Numero invalido!\n");

    return 0;
}
