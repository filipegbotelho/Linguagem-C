/* Leia um valor de volume em metros c�bicos m3 e apresente-o convertido em litros. A
f�rmula de convers�ao �: L = 1000 * M, sendo L o volume em litros e M o volume em
metros c�bicos. */
#include <stdio.h>
int main(void){
    float met, lit;
    printf("Digite um volume em m3: ");
    scanf("%f", &met);
    lit = met * 1000;
    printf("Volume em litros: %.2f\n", lit);




    return 0;
}
