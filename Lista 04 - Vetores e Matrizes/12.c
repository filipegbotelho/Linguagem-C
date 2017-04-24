/* Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a média dos valores. */
#include <stdio.h>
int main(void){
    int i, maior, menor, vet[5], soma;
    printf("Digite cinco valores: ");
    soma = maior = 0;
    for (i = 0; i < 5; i++){
        scanf("%i", &vet[i]);
        soma += vet[i];
        if (vet[i] > maior)
            maior = vet[i];
        if (vet[i] < menor)
            menor = vet[i];
    }
    printf("Maior: %i\n", maior);
    printf("Menor: %i\n", menor);
    printf("Media: %i\n", soma/i);

    return 0;
}
