/* Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
10 elementos cada. Imprimir todos os conjuntos. */
#include <stdio.h>

int main(void){
    int i;
    float vet1[10], vet2[10];
    printf("Digite dez valores: ");
    for (i = 0; i < 10; i++)
        scanf("%f", &vet1[i]);
    for (i = 0; i < 10; i++)
        vet2[i] = vet1[i] * vet1[i];
    printf("Quadrado dos numeros:");
    for (i = 0; i < 10; i++)
        printf(" %.0f", vet2[i]);

    return 0;
}
