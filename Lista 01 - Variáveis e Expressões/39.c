/* A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso.
Sendo que da quantia total:
    - O primeiro ganhador receber� 46%;
    - O segundo receber� 32%;
    - O terceiro receber� o restante;
    Calcule e imprima a quantia ganha por cada um dos ganhadores. */
#include <stdio.h>
int main(void){
    float um, dois, tres;
    um = 780000 * 0.46;
    dois = 780000 * 0.32;
    tres = 780000 * 0.22;
    printf("Primeiro: R$ %.2f\n", um);
    printf("Segundo: R$ %.2f\n", dois);
    printf("Terceiro: R$ %.2f\n", tres);





    return 0;
}
