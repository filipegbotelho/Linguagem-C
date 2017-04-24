/* Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
seu dobro. */
#include <stdio.h>
int main(void){
    int n, ant, suc, soma;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    ant = (n*2) - 1;
    suc = (n*3) + 1;
    soma = ant + suc;
    printf("Soma: %i\n", soma);






    return 0;
}
