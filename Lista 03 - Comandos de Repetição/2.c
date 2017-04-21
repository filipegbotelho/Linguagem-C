/* Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repeticão for, a segunda while, e a terceira do while. */
int main(void){
    int i;
    for (i = 1; i <=100; i++)
        printf("%i ", i);
    printf("\n");
    i = 1;
    while (i <= 100){
        printf("%i ", i);
        i++;
    }
    printf("\n");
    i = 1;
    do{
        printf("%i ", i);
        i++;
    }while(i <= 100);

    return 0;
}
