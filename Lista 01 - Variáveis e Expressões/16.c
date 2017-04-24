/* Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
A fórmula de convers˜ao é: C = P * 2,54, sendo C o comprimento em centímetros e P o
comprimento em polegadas. */
#include <stdio.h>
int main(void){
    float pol, cen;
    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &pol);
    cen = pol * 2.54;
    printf("Comprimento em centimetros: %.2f\n", cen);





    return 0;
}
