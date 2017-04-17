/* Faça uma funcão para verificar se um número é positivo ou negativo. Sendo que o valor
de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.  */
#include <stdio.h>

int Verificar(int n){
    int res;
    if (n > 0)
        res = 1;
    else if (n < 0)
        res = -1;
    else
        res = 0;
    return res;
}

int main(void){

    int numero1, numero2;
    printf("Digite um numero: ");
    scanf("%i", &numero1);
    numero2 = Verificar(numero1);
    printf("%i\n", numero2);

    return 0;
}
