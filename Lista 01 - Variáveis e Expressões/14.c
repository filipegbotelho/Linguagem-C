/* Leia um �ngulo em graus e apresente-o convertido em radianos. A f�rmula de convers��o
�: R = G * pi/180, sendo G o �ngulo em graus e R em radianos e pi = 3,14. */
#include <stdio.h>
int main(void){
    float ang, conv;
    printf("Digite um angulo em graus: ");
    scanf("%f", &ang);
    conv = ang * 3.14 / 180;
    printf("Angulo em radianos: %.2f\n", conv);

    return 0;
}
