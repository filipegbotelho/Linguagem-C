/* Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre
o valor calculado. */
#include <stdio.h>
int main(void){
    float valor, qtd, sal;
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &qtd);
    sal = valor * qtd * 1.1;
    printf("Valor a ser pago: %.2f\n", sal);





    return 0;
}
