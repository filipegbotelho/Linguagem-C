/* Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a média geral. */

#include <stdio.h>
int main(void){
    int i, vet[15], soma;
    printf("Digite quinze notas: ");
    soma = 0;
    for (i = 0; i < 15; i++){
        scanf("%i", &vet[i]);
        soma += vet[i];
    }
    printf("Media geral: %i\n",soma/i);

    return 0;
}
