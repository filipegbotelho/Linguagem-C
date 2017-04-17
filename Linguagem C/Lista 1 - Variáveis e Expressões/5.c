/* Leia um número real e imprima a quinta parte deste número. */
#include <stdio.h>
int main(void){

    float numero;
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    printf("Quinta parte: %.2f\n", numero/5);

    return 0;
}
