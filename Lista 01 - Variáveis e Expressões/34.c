/* Leia o valor do raio de um c�rculo e calcule e imprima a �rea do c�rculo correspondente.
A �rea do c�rculo � pi * raio� , considere pi = 3,141592. */
#include <stdio.h>
int main(void){
    float raio, area;
    printf("Digite o raio de um circulo: ");
    scanf("%f", &raio);
    area = 3.141592 * (raio * raio);
    printf("Area do circulo: %.2f\n", area);






    return 0;
}
