/* Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
lido. */
int main(void){

    int n, maior, menor, i;
    printf("Digite 10 numeros: ");
    maior = 0;
    menor = 10000000;
    for (i = 0; i < 10; i++){
        scanf("%i", &n);
        if (n > maior)
            maior = n;
        if (n < menor)
            menor = n;
    }
    printf("Maior: %i\n", maior);
    printf("Menor: %i\n", menor);


    return 0;
}
