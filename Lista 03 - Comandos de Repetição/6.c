/* Faça um programa que leia 10 inteiros e imprima sua média. */
int main(void){

    int n, i, soma;
    printf("Digite 10 numeros: ");
    soma = 0;
    for (i = 0; i < 10; i++){
        scanf("%i", &n);
        soma += n;
    }
    printf("Media: %.2f\n",(float) soma/10);


    return 0;
}
