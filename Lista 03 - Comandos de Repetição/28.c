/* Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a fórmula a seguir

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1=N!

*/
#include <stdio.h>
#include <math.h>
int main(void){

    int i, j, n, fat;
    double e;
    printf("Digite um numero: ");
    scanf("%i", &n);
    for (e = 1, i = 2; i <= n; i++){
        for (fat = 1, j = i; j >= 1; j--)
            fat *= j;
        e += (float)1/fat;
    }
    printf("E = %.6lf\n", e);

    return 0;
}
