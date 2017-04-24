/* Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequência arbitrária de notas (válidas no intervalo de 10 a 20) e que mostre na tela,
como resultado, a correspondente média aritmética. O número de notas com que o aluno
pretenda efetuar o cálculo n˜ao será fornecido ao programa, o qual terminará quando for
introduzido um valor que n˜ao seja válido como nota de aprovação. */
#include <stdio.h>

int main(void){
    int i, n, soma;
    soma = i = 0;
    printf("Digite as notas: ");
    while(1){
        scanf("%i", &n);
        if (n < 10 || n > 20)
            break;
        soma += n;
        i++;
    }
    printf("Media aritmetica: %.2f", (float)soma/i);


    return 0;
}
