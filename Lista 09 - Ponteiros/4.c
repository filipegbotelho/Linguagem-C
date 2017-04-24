/* Faça um programa que leia 2 valores inteiros e chame uma função que receba estas
2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas
variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B
terá o valor de A. */
#include <stdio.h>
void Troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

}

int main(void){
    int a, b;
    printf("Digite os valores A e B: ");
    scanf("%i %i", &a, &b);
    Troca(&a, &b);
    printf("A: %i\n", a);
    printf("B: %i\n", b);

    return 0;
}
