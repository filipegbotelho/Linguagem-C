/* Leia um valor de �rea em metros quadrados m2 e apresente-o convertido em hectares.
A f�rmula de convers�ao �: H = M * 0,0001, sendo M a �rea em metros quadrados e H
a �rea em hectares. */
#include <stdio.h>
int main(void){
    float met, hectare;
    printf("Digite uma area em metros quadrados: ");
    scanf("%f", &met);
    hectare = met * 0.0001;
    printf("Area em hectares: %.2f\n", hectare);





    return 0;
}
