#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main () {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int nAleatorio = rand() % 5 + 1;
    int nEscolhido;

    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual � o seu palpite? ");
    scanf("%i", &nEscolhido);
    printf("Voc� pensou no n�mero %i e eu pensei no n�mero %i.\n", nEscolhido, nAleatorio);
}
