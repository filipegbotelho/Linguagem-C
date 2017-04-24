/* Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2.
A fórmula de convers˜ao é: M = H * 10000, sendo M a área em metros quadrados e H
a área em hectares. */
#include <stdio.h>
int main(void){
    float met, hectare;
    printf("Digite uma area em Hectares: ");
    scanf("%f", &hectare);
    met = hectare * 10000;
    printf("Area em metros quadrados: %.2f\n", met);





    return 0;
}
