/* Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior média geral.
(d) Encontre o aluno com menor média geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação. */
#include <stdio.h>

typedef struct {
    float media, nota[3];
}Dados;
int main(void){
    Dados aluno[5];
    int i, pmaior, pmenor, pprova1;
    float maior, menor = 100000, prova1;
    prova1 = maior = 0;
    for (i = 0; i < 5; i++){
        printf("Digite as tres notas: ");
        scanf("%f %f %f", &aluno[i].nota[0], &aluno[i].nota[1], &aluno[i].nota[2]);
        aluno[i].media =  (aluno[i].nota[0] + aluno[i].nota[1] + aluno[i].nota[2])/3;
        if (aluno[i].media > maior){
            maior = aluno[i].media;
            pmaior = i+1;
        }
        if (aluno[i].media < menor){
            menor = aluno[i].media;
            pmenor = i+1;
        }
        if (aluno[i].nota[0]> prova1){
            prova1 = aluno[i].nota[0];
            pprova1 = i+1;
        }
    }
    printf("Maior nota na primeira prova:\nAluno: %i Nota: %.2f\n", pprova1, prova1);
    printf("Maior media geral:\nAluno: %i Media: %.2f\n",  pmaior, maior);
    printf("Menor media geral:\nAluno: %i Media: %.2f\n",  pmenor, menor);
    for (i = 0; i < 5; i++)
        aluno[i].media >= 6 ? printf("Aprovado\n") : printf("Reprovado\n");


    return 0;
}
