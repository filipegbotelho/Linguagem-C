/* Leia um valor de �rea em acres e apresente-o convertido em metros quadrados m2. A
f�rmula de convers�ao �: M = A * 4048,58, sendo M a �rea em metros quadrados e A a
�rea em acres. */
#include <stdio.h>
int main(void){
    float met, acre;
    printf("Digite uma area em acres: ");
    scanf("%f", &acre);
    met = acre * 4048.58;
    printf("Area em metros quadrados: %.2f\n", met);





    return 0;
}
