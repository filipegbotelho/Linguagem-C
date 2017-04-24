/* Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A
fórmula de convers˜ao é: M = A * 4048,58, sendo M a área em metros quadrados e A a
área em acres. */
#include <stdio.h>
int main(void){
    float met, acre;
    printf("Digite uma area em acres: ");
    scanf("%f", &acre);
    met = acre * 4048.58;
    printf("Area em metros quadrados: %.2f\n", met);





    return 0;
}
