/* Leia um valor de comprimento em metros e apresente-o convertido em jardas. A f�rmula
de convers�ao �: J = M / 0,91 , sendo J o comprimento em jardas e M o comprimento em
metros. */
#include <stdio.h>
int main(void){
    float jardas, met;
    printf("Digite um comprimento em metros: ");
    scanf("%f", &met);
    jardas = met / 0.91;
    printf("Comprimento em jardas: %.2f\n", jardas);





    return 0;
}
