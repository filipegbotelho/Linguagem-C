/* Leia um valor de comprimento em cent�metros e apresente-o convertido em polegadas.
A f�rmula de convers�ao �: P = C * 2,54 , sendo C o comprimento em cent�metros e P o
comprimento em polegadas. */
#include <stdio.h>
int main(void){
    float pol, cen;
    printf("Digite um comprimento em centimetros");
    scanf("%f", &cen);
    pol = cen * 2.54;
    printf("Comprimento em polegadas: %.2f\n", pol);





    return 0;
}
