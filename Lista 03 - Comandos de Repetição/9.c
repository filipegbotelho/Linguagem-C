/* Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros
n�meros naturais �mpares. */
int main(void){

    int n, i, j;
    printf("Digite um numero: ");
    scanf("%i", &n);
    i = 1;
    j = 0;
    while(i <= n){
        if (j%2 == 1){
            printf("%i ", j);
            i++;
        }
        j++;
    }

    return 0;
}

