/* Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12% */
#include <stdio.h>
int main(void){
    float valor, desc;
    printf("Digite o valor de um produto: ");
    scanf("%f", &valor);
    desc = valor * 0.78;
    printf("Valor com desconto: %.2f\n", desc);





    return 0;
}
