/* Fa�a um programa que determine e mostre os cinco primeiros m�ltiplos de 3, considerando
n�meros maiores que 0. */
int main(void){

    int i;
    printf("Os cinco primeiros m�ltiplos de 3: ");
    for (i = 2; i <= 6; i++)
        printf("%i ", 3*i);

    return 0;
}
