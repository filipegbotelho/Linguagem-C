/* Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente
em dólares. */
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
