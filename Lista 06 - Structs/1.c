/* Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
    - Horário: composto de hora, minutos e segundos.
    - Data: composto de dia, mês e ano.
    - Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/
#include <stdio.h>

typedef struct{
    int hora;
    int minutos;
    int segundos;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    Horario horario;
    Data data;
    char note[200];
}Compromisso;

int main(void){


    return 0;
}
