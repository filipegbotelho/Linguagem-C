/* A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. A média das três notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias. */
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
