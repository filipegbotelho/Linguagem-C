/* Faça uma funcão e um programa de teste para o cálculo do volume de uma esfera.
Sendo que o raio e passado por parâmetro
V = 4/3 * pi * R³*/
#include <stdio.h>
#include <math.h>
void Volume_esfera(int raio){
    float volume;
    volume = (4.0/3.0 * 3.14) * pow(raio,3) ;
    printf("Volume: %.2f m3\n", volume);
}

int main(void){

    float raio = 3;
    Volume_esfera(raio);


    return 0;
}
