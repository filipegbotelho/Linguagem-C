/* Leia um valor de �rea em hectares e apresente-o convertido em metros quadrados m2.
A f�rmula de convers�ao �: M = H * 10000, sendo M a �rea em metros quadrados e H
a �rea em hectares. */
#include <stdio.h>
int main(void){
    float met, hectare;
    printf("Digite uma area em Hectares: ");
    scanf("%f", &hectare);
    met = hectare * 10000;
    printf("Area em metros quadrados: %.2f\n", met);





    return 0;
}
