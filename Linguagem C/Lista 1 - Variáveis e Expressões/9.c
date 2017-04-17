/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
fórmula de convers˜ao é: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin. */
#include <stdio.h>

int main(void){

    float kelvin, celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("Graus em Kelvin: %.2f\n", kelvin);

    return 0;
}
