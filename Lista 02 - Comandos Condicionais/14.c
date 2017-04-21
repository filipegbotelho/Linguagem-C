/* A nota final de um estudante � calculada a partir de tr�s notas atribu�das entre o intervalo
de 0 at� 10, respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral
e a um exame final. A m�dia das tr�s notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno est� reprovado (m�dia entre 0 e 2,9), de
recupera��o (entre 3 e 4,9) ou se foi aprovado. Fa�a todas as verifica��es necess�rias. */
#include <stdio.h>
int main(void){
    int i;
    float nota[3], media;
    printf("Digite as tres notas: ");
    for (i = 0; i < 3; i++){
        scanf("%f", &nota[i]);
        while (nota[i] > 10.0 || nota[i] < 0.0){
            printf("Nota invalida!\n");
            printf("Digite uma nova nota: ");
            scanf("%f", &nota[i]);
        }
    }
    media = ((nota[0] * 2) + (nota[1] * 3) + (nota[2] * 5))/10;
    if (media <= 2.9)
        printf("Reprovado\n");
    else if (media <= 4.9)
        printf("Recuperacao\n");
    else
        printf("Aprovado\n");

    return 0;
}
