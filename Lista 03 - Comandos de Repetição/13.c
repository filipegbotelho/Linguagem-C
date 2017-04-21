/* Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem crescente. */
int main(void){

    int n, i;
    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("Numeros pares de 0 ate N: ");
    for (i = 0; i <= n; i++){
        if (i%2 == 0)
            printf("%i ", i);
    }



    return 0;
}
