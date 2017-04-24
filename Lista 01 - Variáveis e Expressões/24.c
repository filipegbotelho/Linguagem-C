/* Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
fórmula de convers˜ao é: A = M * 0,000247, sendo M a área em metros quadrados e A
a área em acres. */
#include <stdio.h>
int main(void){
    float met, acre;
    printf("Digite uma area em metros quadrados: ");
    scanf("%f", &met);
    acre = met * 0.000247;
    printf("Area em acres: %.2f\n", acre);





    return 0;
}
