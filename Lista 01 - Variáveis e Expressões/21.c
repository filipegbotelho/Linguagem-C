/* Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula
de convers˜ao é: K = L * 0,45, sendo K a massa em quilogramas e L a massa em libras. */
#include <stdio.h>
int main(void){
    float libras, quil;
    printf("Digite um peso em libras: ");
    scanf("%f", &quil);
    quil = libras * 0.45;
    printf("Peso em quilogramas: %.2f\n", quil);





    return 0;
}
