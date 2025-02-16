#include <stdio.h>
#include <locale.h>

//lendo caracteres com getchar();
void main() {
    setlocale(LC_ALL, "Portuguese");

    char r;
    char s;

    printf("Digite uma letra: ");
    fflush(stdin);
    r = getchar();
    printf("Digite outra letra: ");
    fflush(stdin);
    s = getchar();

    printf("Você digitou a letra %c e a letra %c.", r, s);
}
