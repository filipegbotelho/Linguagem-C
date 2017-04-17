/* Crie uma funcão que recebe como parâmetro um número inteiro e devolve o seu dobro */
#include <stdio.h>

int Dobro(int numero){
    return (2 * numero);
}

int main(void){

    int numero1, numero2;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero1);
    numero2 = Dobro(numero1);
    printf("Dobro: %i\n", numero2);

    return 0;
}
