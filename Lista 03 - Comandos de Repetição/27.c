/* Em Matem�tica, o n�mero harm�nico designado por H(n) define-se como sendo a soma
da s�rie harm�nica:

H(n) = 1+1/2+1/3+1/4+...+1/n

Fa�a um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).*/
#include <stdio.h>

int main(void){
    int i, n;
    double h;
    printf("Digite um numero: ");
    scanf("%i", &n);
    for (h = 0, i = 1; i <= n; i++)
        h +=(float) 1/i;
    printf("Numero harmonico: %.2f\n", h);

    return 0;
}
