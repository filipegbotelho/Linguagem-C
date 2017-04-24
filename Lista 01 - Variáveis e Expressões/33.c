/* Leia o tamanho do lado de um quadrado e imprima como resultado a sua área. */
#include <stdio.h>
int main(void){
    int lado, area;
    printf("Digite o comprimento de um lado do quadrado: ");
    scanf("%i", &lado);
    area = lado * 4;
    printf("Area do quadrado: %i\n", area);





    return 0;
}
