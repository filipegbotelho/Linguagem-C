/* Leia uma dist�ncia em milhas e apresente-a convertida em quil�metros. A f�rmula de
convers�ao �: K = 1,61 * M, sendo K a dist�ncia em quil�metros e M em milhas. */
#include <stdio.h>
int main(void){
    float dist, conv;
    printf("Digite uma distancia em milhas: ");
    scanf("%f", &dist);
    conv = dist * 1.61;
    printf("Distancia em quilometros: %.2f\n", conv);

    return 0;
}
