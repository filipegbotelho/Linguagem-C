/* Leia um valor em real e a cota��o do d�lar. Em seguida, imprima o valor correspondente
em d�lares. */
#include <stdio.h>
int main(void){
    float real, dolar, cot;
    printf("Digite um valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cot);
    dolar = cot * real;
    printf("Valor em dolar: %.2f\n", dolar);





    return 0;
}
