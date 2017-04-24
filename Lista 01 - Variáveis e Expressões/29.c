/* Leia quatro notas, calcule a média aritmética e imprima o resultado. */
#include <stdio.h>
int main(void){
    float nota1, nota2, nota3, nota4, media;
    printf("Digite quatro notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    media = (nota1 + nota2 + nota3 + nota4)/4.0;
    printf("Media aritmetica: %.2f\n", media);



    return 0;
}
