/* Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos. */
#include <stdio.h>
int main(void){
    float nota[3], media;
    printf("Digite as 3 notas do aluno: ");
    scanf("%f %f %f", &nota[0], &nota[1], &nota[2]);
    media = ((1 * nota[0]) + (1 * nota[1]) + (2 * nota[2]))/ 3;
    media >= 6.0 ? printf("Media: %.2f\nAprovado!\n", media) : printf("Media: %.2f\nReprovado!\n", media);

    return 0;
}
