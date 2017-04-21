/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de convers˜ao é: K = M * 3,6, sendo K a velocidade
em km/h e M em m/s. */
#include <stdio.h>
int main(void){
    float vel, conv;
    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &vel);
    conv = vel * 3.6;
    printf("Velocidade em km/h: %.2f\n", conv);




    return 0;
}
