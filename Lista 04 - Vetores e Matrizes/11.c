/* Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e mostre a
quantidade de n�meros negativos e a soma dos n�meros positivos desse vetor. */
#include <stdio.h>
int main(void){
    int i, par, impar, vet[10];
    printf("Digite dez valores: ");
    par = impar = 0;
    for (i = 0; i < 10; i++){
        scanf("%f", &vet[i]);
        if (vet[i] % 2 == 0)
            par++;
        else
            impar++;
    }
    printf("Qtd. de Par: %i\n", par);
    printf("Qtd. de Impares: %i\n", impar);


    return 0;
}
