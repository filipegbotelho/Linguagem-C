/* Fa�a um programa que receba do usu�rio um vetor com 10 posi��es. Em seguida dever�
ser impresso o maior e o menor elemento do vetor. */
#include <stdio.h>

int main(void){
    int i, vet[10], maior, menor;
    printf("Digite dez valores: ");
    maior = 0;
    for (i = 0; i < 10; i++){
        scanf("%i", &vet[i]);
        if (vet[i] > maior)
            maior = vet[i];
        if (vet[i] < menor)
            menor = vet[i];
    }
    printf("Maior: %i\n", maior);
    printf("Menor: %i\n", menor);

    return 0;
}
