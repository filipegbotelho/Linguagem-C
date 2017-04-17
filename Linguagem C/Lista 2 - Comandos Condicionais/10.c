/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
- Homens: (72.7 * h) - 58
- Mulheres: (62.1 * h) - 44.7*/
#include <stdio.h>

int main(void){

    float altura, homem, mulher;
    char sexo;
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    printf("M - Mulher e H - Homem. Digite o sexo: ");
    scanf(" %c", &sexo);
    homem = (72.7 * altura) - 58;
    mulher = (62.1 * altura) - 44.7;
    if (sexo == 'M')
        printf("Peso ideal: %.2f\n", mulher);
    else if(sexo == 'H')
        printf("Peso ideal: %.2f\n", homem);

    return 0;
}
