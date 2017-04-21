/* Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
convers˜ao é: M = K/1,61, sendo K a distância em quilômetros e M em milhas. */
#include <stdio.h>
int main(void){
    float dist, conv;
    printf("Digite uma distancia em quilometros: ");
    scanf("%f", &dist);
    conv = dist /1.61;
    printf("Distancia em milhas: %.2f\n", conv);




    return 0;
}
