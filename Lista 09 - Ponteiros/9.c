/* Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz. */
#include <stdio.h>

int main(void){
    float m[3][3];
    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Linha: %i\tColuna: %i\nEndereco: %i\n", i+1, j+1, &m[i][j]);
        }
    }


    return 0;
}
