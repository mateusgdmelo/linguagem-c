#include <stdio.h>
#include <locale.h>

//lendo strings com gets();
void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    char endereco[40];

    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite o seu endere�o: ");
    gets(endereco);

    printf("O seu nome � \"%s\" e o seu endere�o � \"%s\".", nome, endereco);
}
