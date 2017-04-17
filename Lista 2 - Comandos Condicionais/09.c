/* Leia o salário de um trabalhador e o valor da prestaç˜ao de um empréstimo. Se a
prestação for maior que 20% do salário imprima: "Empréstimo não concedido", caso
contrário imprima: "Empréstimo concedido". */
#include <stdio.h>

int main(void){

    float salario, prestacao;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);
    if (prestacao > 0.2 * salario)
        printf("Emprestimo nao concedido\n");
    else
        printf("Emprestimo concedido\n");

    return 0;
}
