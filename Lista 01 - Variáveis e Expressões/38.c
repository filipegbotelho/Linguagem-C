/* Leia o sal�rio de um funcion�rio. Calcule e imprima o valor do novo sal�rio, sabendo que
ele recebeu um aumento de 25%. */
#include <stdio.h>
int main(void){
    float salario;
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);
    salario = salario * 1.25;
    printf("Salario reajustado: %.2f\n", salario);





    return 0;
}
