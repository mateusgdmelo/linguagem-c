#include <stdio.h>
#include <locale.h>

void main() {
    //setlocale(LC_ALL, "Portuguese");

    int n;
    float m;

    printf("Digite um número inteiro: ");
    scanf("%i", &n);
    printf("Digite um número real: ");
    scanf("%f", &m);
    printf("Você acabou de digitar o valor %i e o valor %.1f. Obrigado!", n, m);



}
