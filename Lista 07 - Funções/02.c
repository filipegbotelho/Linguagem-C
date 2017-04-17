/* Faça uma funcão que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela na tela
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000. */
#include <stdio.h>

void Data(){
    int dia, mes, ano;
    printf("Exemplo de Data: 10/05/2010\n");
    printf("Digite uma data: ");
    scanf("%i %i %i", &dia, &mes, &ano);
    printf("%i de ", dia);
    switch(mes){
        case 1:
            printf("janeiro de ");
            break;
        case 2:
            printf("fevereiro de ");
            break;
        case 3:
            printf("março de ");
            break;
        case 4:
            printf("abril de ");
            break;
        case 5:
            printf("maio de ");
            break;
        case 6:
            printf("junho de ");
            break;
        case 7:
            printf("julho de ");
            break;
        case 8:
            printf("agosto de ");
            break;
        case 9:
            printf("setembro de ");
            break;
        case 10:
            printf("outubro de ");
            break;
        case 11:
            printf("novembro de ");
            break;
        case 12:
            printf("dezembro de ");
            break;
    }
    printf("%i\n", ano);

}

int main(void){

    Data();


    return 0;
}
