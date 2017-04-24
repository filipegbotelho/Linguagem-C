/* Faça um algoritmo que leia um número positivo e imprima seus divisores. */
#include <stdio.h>

int main(void){
    int n, i;
    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("Divisores do numero:");
    for(i = 1; i <= n; i++){
        if (n%i == 0)
            printf(" %i", i);
    }
    printf("\n");


    return 0;
}
