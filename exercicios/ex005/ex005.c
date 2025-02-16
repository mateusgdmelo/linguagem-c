#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void main () {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int nAleatorio = rand() % 5 + 1;
    int nEscolhido;

    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%i", &nEscolhido);
    printf("Você pensou no número %i e eu pensei no número %i.\n", nEscolhido, nAleatorio);
}
