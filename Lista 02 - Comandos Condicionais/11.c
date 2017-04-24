/* Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor
8 (2 + 5 + 1). Se o número lido n˜ao for maior do que zero, o programa terminará com a
mensagem “Número inválido” */
#include <stdio.h>
int main(void){
    int soma, i;
    char numero[20];
    gets(numero);
    i = soma = 0;
    if (numero[0] == '-'){
        printf("Numero invalido\n");
        return 0;
    }
    else
        while (numero[i] != '\0'){
            switch (numero[i]){
                case '0':
                    soma += 0;
                    break;
                case '1':
                    soma += 1;
                    break;
                case '2':
                    soma += 2;
                    break;
                case '3':
                    soma += 3;
                    break;
                case '4':
                    soma += 4;
                    break;
                case '5':
                    soma += 5;
                    break;
                case '6':
                    soma += 6;
                    break;
                case '7':
                    soma += 7;
                    break;
                case '8':
                    soma += 8;
                    break;
                case '9':
                    soma += 9;
                    break;
            }
            i++;
        }
        printf("Soma: %i\n", soma);




    return 0;
}
