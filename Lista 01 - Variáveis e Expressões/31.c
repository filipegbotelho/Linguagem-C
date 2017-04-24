/* Leia um número inteiro e imprima o seu antecessor e o seu sucessor. */
#include <stdio.h>
int main(void){
    int n, ant, suc;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    ant = n - 1;
    suc = n + 1;
    printf("Antecessor: %i\n", ant);
    printf("Sucessor: %i\n", suc);




    return 0;
}
