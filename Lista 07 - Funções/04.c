/* Faça uma funcão para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de ˜
outro número inteiro. Ex: 1, 4, 9...  */
#include <stdio.h>

void Quadrado_perfeito(float n){
    int aux;
    n = sqrt(n);
    aux = n;
    if (aux == n && n > 0)
        printf("Quadrado perfeito\n");
    else
        printf("Quadrado nao perfeito\n");

}

int main(void){

    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    Quadrado_perfeito(numero);

    return 0;
}
