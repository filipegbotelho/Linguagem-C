/* Leia o sal�rio de um trabalhador e o valor da presta�ao de um empr�stimo. Se a
presta��o for maior que 20% do sal�rio imprima: "Empr�stimo n�o concedido", caso
contr�rio imprima: "Empr�stimo concedido". */
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
