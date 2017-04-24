/* Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos
três valores lidos. */
#include <stdio.h>
int main(void){
    int a, b, c, soma;
    printf("Digite tres valores: ");
    scanf("%i %i %i", &a, &b, &c);
    soma = (a*a) + (b*b) + (c*c);
    printf("A soma dos quadrados: %i\n", soma);






    return 0;
}
