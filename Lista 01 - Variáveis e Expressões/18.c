/* Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
fórmula de convers˜ao é: L = 1000 * M, sendo L o volume em litros e M o volume em
metros cúbicos. */
#include <stdio.h>
int main(void){
    float met, lit;
    printf("Digite um volume em m3: ");
    scanf("%f", &met);
    lit = met * 1000;
    printf("Volume em litros: %.2f\n", lit);




    return 0;
}
