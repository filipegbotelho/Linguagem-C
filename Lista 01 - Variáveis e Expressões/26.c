/* Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares.
A fórmula de convers˜ao é: H = M * 0,0001, sendo M a área em metros quadrados e H
a área em hectares. */
#include <stdio.h>
int main(void){
    float met, hectare;
    printf("Digite uma area em metros quadrados: ");
    scanf("%f", &met);
    hectare = met * 0.0001;
    printf("Area em hectares: %.2f\n", hectare);





    return 0;
}
