/* Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles.*/
#include <stdio.h>
int main(void){

    int x, y, z;

    printf("Digite um 3 numeros inteiros: ");
    scanf("%i %i %i", &x, &y, &z);
    printf("Soma: %i\n", x+y+z);


    return 0;
}
