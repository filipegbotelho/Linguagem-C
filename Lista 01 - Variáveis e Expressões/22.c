/* Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula
de convers˜ao é: M = 0,91 * J, sendo J o comprimento em jardas e M o comprimento
em metros. */
#include <stdio.h>
int main(void){
    float jardas, met;
    printf("Digite um comprimento em jardas: ");
    scanf("%f", &jardas);
    met = jardas * 0.91;
    printf("Comprimento em metros: %.2f\n", met);





    return 0;
}
