/* Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil). */
int main(void){

    int i;
    for(i = 0; i < 100000; i++, i += 999)
        printf("%i ", i);
    printf("\n");

    return 0;
}
