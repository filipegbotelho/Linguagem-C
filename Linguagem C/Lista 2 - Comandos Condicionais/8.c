/* Fa�a um programa que leia 2 notas de um aluno, verifique se as notas s�ao v�lidas e
exiba na tela a m�dia destas notas. Uma nota v�lida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota n�ao possua um valor v�lido, este fato deve ser
informado ao usu�rio e o programa termina */
#include <stdio.h>

int main(void){

    float nota1, nota2;
    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    if(nota1 > 10.0 || nota1 < 0.0)
        printf("Nota 1 invalida!\n");
    else
        printf("Nota 1 valida!\n");
    if(nota2 > 10.0 || nota2 < 0.0)
        printf("Nota 2 invalida!\n");
    else
        printf("Nota 2 valida!\n");

    return 0;
}
