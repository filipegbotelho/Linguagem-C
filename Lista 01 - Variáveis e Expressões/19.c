/* Leia um valor de volume em litros e apresente-o convertido em metros c�bicos m3. A
f�rmula de convers�ao �: M = L/1000 , sendo L o volume em litros e M o volume em metros
c�bicos. */
#include <stdio.h>
int main(void){
    float lit, met;
    printf("Digite um volume em litros: ");
    scanf("%f", &lit);
    met = lit / 1000;
    printf("Volume em m3: %.2f\n", met);





    return 0;
}
