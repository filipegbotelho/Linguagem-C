/* Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
naturais de 0 at� N em ordem decrescente. */
int main(void){

    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("Numeros de N ate 0: ");
    while((n--)+1)
        printf("%i ", n+1);



    return 0;
}
