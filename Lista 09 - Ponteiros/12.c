/* Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
o segundo menor valor na variável do meio, e o maior valor na última variável. A função
deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela. */
#include <stdio.h>

int Ordenar(int x[]){
    int aux, j, i;
    if (x[0] == x[1] && x[0] == x[2])
        return 1;
    else{
        for (i = 0; i < 3; i++){
            for (j = i+1; j < 3; j++){
                if (x[i] > x[j]){
                    aux = x[i];
                    x[i] = x[j];
                    x[j] = aux;
                }
            }
        }
        return 0;
    }
}

int main(void){
    int x[3], i;
    printf("Digite tres valores: ");
    for (i = 0; i < 3; i++)
        scanf("%i", &x[i]);

    if (Ordenar(x) == 1)
        printf("Numero iguais\n");
    else{
        printf("Numeros diferentes\n");
        for (i = 0; i < 3; i++)
            printf(" %i", x[i]);
    }
    return 0;
}
