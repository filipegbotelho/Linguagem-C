/* Sejam a e b os catetos de um tri�ngulo, onde a hipotenusa � obtida pela equa��o:
hipotenusa = Va� + b�. Fa�a um programa que receba os valores de a e b e calcule
o valor da hipotenusa atrav�s da equa��o. Imprima o resultado dessa opera��o. */
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
