/* Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
quantidade de números negativos e a soma dos números positivos desse vetor. */
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
