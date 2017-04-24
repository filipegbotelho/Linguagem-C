/* Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex: a soma dos divisores do número 66 é
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78 */
#include <stdio.h>

int main(void){
    int n, i, soma;
    printf("Digite um numero: ");
    scanf("%i", &n);
    soma = 0;
    for(i = 1; i < n; i++){
        if (n%i == 0)
            soma += i;
    }
    printf("Soma: %i\n", soma);


    return 0;
}
