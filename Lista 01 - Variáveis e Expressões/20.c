/* Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula
de convers˜ao é: L = K / 0,45 , sendo K a massa em quilogramas e L a massa em libras. */
#include <stdio.h>
int main(void){
    float libras, quil;
    printf("Digite um peso em quilogramas: ");
    scanf("%f", &quil);
    libras = quil / 0.45;
    printf("Peso em libras:: %.2f\n", libras);





    return 0;
}
