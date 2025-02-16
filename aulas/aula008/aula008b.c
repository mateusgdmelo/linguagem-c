#include <stdio.h>
#include <locale.h>

//lendo caracteres com scanf()
void main() {
    setlocale(LC_ALL, "Portuguese");

    char r;
    char s;

    printf("Digite uma letra: ");
    fflush(stdin);
    scanf("%c", &r);
    printf("Digite outra letra: ");
    fflush(stdin);
    scanf("%c", &s);

    printf("Você digitou a letra %c e a letra %c.", r, s);
}
