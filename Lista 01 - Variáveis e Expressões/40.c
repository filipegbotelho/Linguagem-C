/* Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite
o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser
paga, sabendo-se que s˜ao descontados 8% para imposto de renda. */
#include <stdio.h>
int main(void){
    int dia;
    float quantia;
    printf("Digite a quantidade de dias: ");
    scanf("%i", &dia);
    quantia =(float) (dia * 30.0) - 8;
    printf("A quantia liquida: %.2f\n", quantia);






    return 0;
}
