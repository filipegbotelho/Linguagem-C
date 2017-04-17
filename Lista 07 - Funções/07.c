/* Faça um função que receba uma temperatura em graus Celsius e retorne-a convertida
em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a
temperatura em Farenheit e C a temperatura em Celsius.*/
#include <stdio.h>

float Fahrenheit(int celsius){

    return (celsius * (9.0/5.0) + 32.0);
}

int main(void){

    float celsius, fahrenheit;
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = Fahrenheit(celsius);
    printf("Graus Fahrenheit: %.2f\n", fahrenheit);


    return 0;
}
