/* Leia um valor de �rea em metros quadrados m2 e apresente-o convertido em acres. A
f�rmula de convers�ao �: A = M * 0,000247, sendo M a �rea em metros quadrados e A
a �rea em acres. */
#include <stdio.h>
int main(void){
    float met, acre;
    printf("Digite uma area em metros quadrados: ");
    scanf("%f", &met);
    acre = met * 0.000247;
    printf("Area em acres: %.2f\n", acre);





    return 0;
}
