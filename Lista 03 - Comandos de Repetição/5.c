/* Faça um programa que peça ao usuário para digitar 10 valores e some-os. */
int main(void){

    int n, i, soma;
    printf("Digite 10 numeros: ");
    soma = 0;
    for (i = 0; i < 10; i++){
        scanf("%i", &n);
        soma += n;
    }
    printf("Soma: %i\n", soma);

    return 0;
}
