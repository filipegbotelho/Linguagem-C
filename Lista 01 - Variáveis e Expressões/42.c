/* Receba o sal�rio-base de um funcion�rio. Calcule e imprima o sal�rio a receber, sabendo-se
que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso,
ele paga 7% de imposto sobre o sal�rio-base. */
#include <stdio.h>
int main(void){
    float salb, grat, imp;
    printf("Digite o salario-base: ");
    scanf("%f", &salb);
    grat = salb * 0.05;
    imp = salb * 0.07;
    salb = salb + grat - imp;
    printf("Salario a receber: %.2f\n", salb);






    return 0;
}
