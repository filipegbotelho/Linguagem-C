/* Escreva um programa que leia um n�mero inteiro e calcule a soma de todos os divisores
desse n�mero, com exce��o dele pr�prio. Ex: a soma dos divisores do n�mero 66 �
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
