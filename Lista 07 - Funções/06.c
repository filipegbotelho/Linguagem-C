/* Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos. */
#include <stdio.h>

void Converter_segundos(int horas, int minutos, int segundos){
    int conv;
    conv = horas * 60 * 60 + minutos*60 + segundos;
    printf("Tempo em segundos: %i\n", conv);

}

int main(void){

    int horas, minutos, segundos;
    printf("Exemplo de Horario: 10:05:35\n");
    printf("Digite uma horario: ");
    scanf("%i %i %i", &horas, &minutos, &segundos);
    Converter_segundos(horas, minutos, segundos);

    return 0;
}
