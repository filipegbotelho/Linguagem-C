/* Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem decrescente. */
int main(void){

    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("Numeros pares de N ate 0: ");
    do{
        if (n%2 == 0)
            printf("%i ", n);
    }while(n--);


    return 0;
}
