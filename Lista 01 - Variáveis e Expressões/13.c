/* Leia uma dist�ncia em quil�metros e apresente-a convertida em milhas. A f�rmula de
convers�ao �: M = K/1,61, sendo K a dist�ncia em quil�metros e M em milhas. */
#include <stdio.h>
int main(void){
    float dist, conv;
    printf("Digite uma distancia em quilometros: ");
    scanf("%f", &dist);
    conv = dist /1.61;
    printf("Distancia em milhas: %.2f\n", conv);




    return 0;
}
