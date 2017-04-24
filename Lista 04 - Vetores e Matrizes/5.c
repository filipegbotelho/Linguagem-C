/* Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui. */

#include <stdio.h>
int main(void){
    int i, vet[10], par;
    printf("Digite dez valores: ");
    par = 0;
    for (i = 0; i < 10; i++){
        scanf("%i", &vet[i]);
        if (i%2 == 0)
            par++;
    }
    printf("Quantidade de pares: %i\n", par);


    return 0;
}
