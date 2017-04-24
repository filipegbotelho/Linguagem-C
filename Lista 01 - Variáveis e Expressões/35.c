/* Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
hipotenusa = Va² + b². Faça um programa que receba os valores de a e b e calcule
o valor da hipotenusa através da equação. Imprima o resultado dessa operação. */
#include <stdio.h>
#include <math.h>
int main(void){
    float cat1, cat2, hip;
    printf("Digite os valores dos catetos: ");
    scanf("%f %f", &cat1, &cat2);
    hip = sqrt((cat1 * cat1) + (cat2 * cat2));
    printf("Valor da hipotenusa: %.2f\n", hip);






    return 0;
}
