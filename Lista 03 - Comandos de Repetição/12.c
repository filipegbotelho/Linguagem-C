/* Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente. */
int main(void){

    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("Numeros de N ate 0: ");
    while((n--)+1)
        printf("%i ", n+1);



    return 0;
}
