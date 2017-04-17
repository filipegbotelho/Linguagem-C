/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fórmula de convers˜ao é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius. */
#include <stdio.h>

int main(void){

    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * (9.0 / 5.0)) + 32;
    printf("Graus em Farhrenheit: %.2f\n", fahrenheit);



    return 0;
}
