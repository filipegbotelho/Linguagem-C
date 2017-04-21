/* Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */
int main(void){

    int i, j, soma;
    i = j = soma = 0;
    while(i < 50){
        if (j%2 == 0){
            soma += j;
            i++;
        }
        j++;
    }
    printf("Soma: %i\n", soma);


    return 0;
}
