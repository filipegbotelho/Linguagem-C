/* Ler uma sequência de números inteiros e determinar se eles s˜ao pares ou n˜ao. Deverá
ser informado o número de dados lidos e número de valores pares. O processo termina
quando for digitado o número 1000. */
#include <stdio.h>

int main(void){
    int n, par, qtd;
    par = qtd = 0;
    printf("Digite os numeros: ");
    while(1){
        scanf("%i", &n);
        if (n == 1000)
            break;
        else{
            if (n%2 == 0)
                par++;
        }
        qtd++;
    }
    printf("Qtd. de dados lidos: %i\n", qtd);
    printf("Qtd. de pares: %i\n", par);


    return 0;
}
