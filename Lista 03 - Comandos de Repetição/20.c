/* Ler uma sequ�ncia de n�meros inteiros e determinar se eles s�ao pares ou n�ao. Dever�
ser informado o n�mero de dados lidos e n�mero de valores pares. O processo termina
quando for digitado o n�mero 1000. */
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
