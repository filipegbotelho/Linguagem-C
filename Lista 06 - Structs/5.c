/* Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois
vetores. */
#include <stdio.h>

typedef struct{
    float x;
    float y;
    float z;
}Vetor;

int main(void){
    Vetor vetor[2];
    float soma;
    int i;

    for (i = 0; i < 2; i++){
        printf("Digite os tres valores do vetor %i: ", i+1);
        scanf("%f %f %f", &vetor[i].x, &vetor[i].y, &vetor[i].z);
    }
    soma = 0;
    soma += vetor[0].x + vetor[1].x;
    soma += vetor[0].y + vetor[1].y;
    soma += vetor[0].z + vetor[1].z;
    printf("Soma: %.2f\n", soma);

    return 0;
}
