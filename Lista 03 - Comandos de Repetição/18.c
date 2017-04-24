/* Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e
quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser
fornecida pelo usuário. */
#include <stdio.h>

int main(void){
    int n, maior = 0, numero, qtd = 0;
    printf("Digite a quantidade de numeros para serem lidos: ");
    scanf("%i", &n);
    printf("");
    printf("Digite os numeros: ");
    while(n--){
        scanf("%i", &numero);
        if (numero >= maior){
            maior = numero;
            if (numero == maior)
                qtd++;
        }
    }
    printf("Maior:%i \tQtd.:%i\n", maior, qtd);


    return 0;
}
