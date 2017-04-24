/* Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais
e os escreva na tela. */
#include <stdio.h>
int main(void){
    int vet1[10], vet2[5], i, j, k;
    printf("Digite cinco valores: ");
    for (i = 0; i < 10; i++)
        scanf("%i", &vet1[i]);
    k = 0;
    for (i = 0; i < 10; i++){
        j = i + 1;
        while (j < 10){
            if (vet1[i] == vet1[j]){
                vet2[k] = vet1[i];
                k++;
                break;
            }
            j++;
        }
    }
    printf("Valores repitidos: ");
    for (i = 0; i < k; i++)
        printf(" %i", vet2[i]);

    return 0;
}

