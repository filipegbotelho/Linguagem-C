/* Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
convers˜ao é: K = 1,61 * M, sendo K a distância em quilômetros e M em milhas. */
#include <stdio.h>
int main(void){
    float dist, conv;
    printf("Digite uma distancia em milhas: ");
    scanf("%f", &dist);
    conv = dist * 1.61;
    printf("Distancia em quilometros: %.2f\n", conv);

    return 0;
}
