/* Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente. */
int main(void){

    int n, i;
    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("Numeros de 0 ate N: ");
    for (i = 0; i <= n; i++)
        printf("%i ", i);


    return 0;
}
