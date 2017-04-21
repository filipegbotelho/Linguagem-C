/* Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário
a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na
tela. */
#include <stdio.h>

typedef struct{
    char nome[20], curso[30];
    int matricula;
}Aluno;

int main(void){
    Aluno dados[5];
    int i;
    for (i = 0; i < 5; i++){
        fflush(stdin);
        printf("Digite o nome: ");
        gets(dados[i].nome);
        printf("Digite a matricula: ");
        scanf("%i", &dados[i].matricula);
        fflush(stdin);
        printf("Digite o curso: ");
        gets(dados[i].curso);
    }
    for (i = 0; i < 5; i++){
        printf("Nome: %s\n", dados[i].nome);
        printf("Matricula: %i\n", dados[i].matricula);
        printf("Curso: %s\n", dados[i].curso);
    }



    return 0;
}
