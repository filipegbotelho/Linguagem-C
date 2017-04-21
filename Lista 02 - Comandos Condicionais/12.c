/* Ler um n�mero inteiro. Se o n�mero lido for negativo, escreva a mensagem �N�mero
inv�lido�. Se o n�mero for positivo, calcular o logaritmo deste numero. */
#include <stdio.h>
#include <math.h>
int main(void){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    n > 0 ? printf("Logaritmo: %.2f\n", (float)log10(n)) : printf("Numero invalido!\n");

    return 0;
}
