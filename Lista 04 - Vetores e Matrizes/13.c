/* Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor. */
#include <stdio.h>
int main(void){
    int i, pmaior, pmenor, maior, menor, vet[5];
    printf("Digite cinco valores: ");
    maior = 0;
    for (i = 0; i < 5; i++){
        scanf("%i", &vet[i]);
        if (vet[i] > maior){
            maior = vet[i];
            pmaior = i+1;
        }
        if (vet[i] < menor){
            menor = vet[i];
            pmenor = i+1;
        }
    }
    printf("Posicao do menor: %i\n", pmaior);
    printf("Posicao do maior: %i\n", pmenor);


    return 0;
}
