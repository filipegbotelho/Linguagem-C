/* Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio² * altura,
onde pi = 3,141592. */
#include <stdio.h>
int main(void){
    float alt, raio, vol;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &alt);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    vol = 3.141592 * (raio * raio) * alt;
    printf("O volume do cilindro: %.2f\n", vol);




    return 0;
}
