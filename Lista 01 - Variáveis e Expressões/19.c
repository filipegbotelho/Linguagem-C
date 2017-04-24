/* Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
fórmula de convers˜ao é: M = L/1000 , sendo L o volume em litros e M o volume em metros
cúbicos. */
#include <stdio.h>
int main(void){
    float lit, met;
    printf("Digite um volume em litros: ");
    scanf("%f", &lit);
    met = lit / 1000;
    printf("Volume em m3: %.2f\n", met);





    return 0;
}
