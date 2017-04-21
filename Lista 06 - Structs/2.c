/* Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura. */
#include <stdio.h>
typedef struct{
    char nome[30], endereco[50];
    int idade;
}Dados;

int main(void){
    Dados dados;
    printf("Digite o nome: ");
    gets(dados.nome);
    printf("Digite a idade: ");
    scanf("%i", &dados.idade);
    setbuf(stdin, 0);
    printf("Digite o endereco: ");
    gets(dados.endereco);

    printf("Nome: %s\n", dados.nome);
    printf("Idade: %i\n", dados.idade);
    printf("Endereco: %s\n", dados.endereco);
    return 0;
}
