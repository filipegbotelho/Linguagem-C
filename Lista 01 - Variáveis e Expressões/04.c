/* Leia um número real e imprima o resultado do quadrado desse número. */
#include <stdio.h>
int main(void){

    float numero;
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    printf("Quadrado: %.2f\n", numero*numero);


    return 0;
}
