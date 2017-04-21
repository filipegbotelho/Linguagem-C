/* Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0. */
int main(void){

    int i;
    printf("Os cinco primeiros múltiplos de 3: ");
    for (i = 2; i <= 6; i++)
        printf("%i ", 3*i);

    return 0;
}
