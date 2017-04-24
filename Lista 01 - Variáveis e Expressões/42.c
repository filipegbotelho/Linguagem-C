/* Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso,
ele paga 7% de imposto sobre o salário-base. */
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
