/* Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
naturais de 0 at� N em ordem crescente. */
int main(void){

    int n, i;
    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("Numeros de 0 ate N: ");
    for (i = 0; i <= n; i++)
        printf("%i ", i);


    return 0;
}
