/* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A fórmula de convers˜ao é: C = 5.0 (F - 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit. */
#include <stdio.h>

int main(void){

    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (5.0 * (fahrenheit - 32.0))/9.0;
    printf("Graus em Celsius: %.2f\n", celsius);


    return 0;
}
