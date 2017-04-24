/* Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de convers˜ão
é: G = R * 180/pi, sendo G o ângulo em graus e R em radianos e pi = 3,14. */
#include <stdio.h>
int main(void){
    float ang, conv;
    printf("Digite um angulo em radianos: ");
    scanf("%f", &ang);
    conv = (ang * 180.0) / 3.14;
    printf("Angulo em graus: %.2f\n", conv);





    return 0;
}
