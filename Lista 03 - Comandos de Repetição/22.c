/* Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequ�ncia arbitr�ria de notas (v�lidas no intervalo de 10 a 20) e que mostre na tela,
como resultado, a correspondente m�dia aritm�tica. O n�mero de notas com que o aluno
pretenda efetuar o c�lculo n�ao ser� fornecido ao programa, o qual terminar� quando for
introduzido um valor que n�ao seja v�lido como nota de aprova��o. */
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
