/* Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida
pela equação: hipotenusa = raiz(a² + ²). Faça uma função que receba os valores
de a e b e calcule o valor da hipotenusa através da equação*/
#include <stdio.h>
#include <math.h>
float Hipotenusa(int a, int b){
    float hipotenusa;
    hipotenusa = sqrt(pow(a,2) + pow(b,2));
    return hipotenusa;
}

int main(void){

    int a, b;
    float res;
    printf("Digite os valores dos catetos a e b: ");
    scanf("%i %i", &a, &b);
    res = Hipotenusa(a, b);
    printf("Hipotenusa: %.2f", res);

    return 0;
}
