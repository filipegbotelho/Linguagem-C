/* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
fórmula de convers˜ao é: C = K - 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin. */
#include <stdio.h>

int main(void){

    float kelvin, celsius;

    printf("Digite a temperatura em graus Kelvin: ");
    scanf("%f", &kelvin);
    celsius = kelvin - 273.15;
    printf("Graus em Celsius: %.2f\n", celsius);


    return 0;
}
