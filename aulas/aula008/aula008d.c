#include <stdio.h>
#include <locale.h>

//lendo strings com gets();
void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    char endereco[40];

    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite o seu endereço: ");
    gets(endereco);

    printf("O seu nome é \"%s\" e o seu endereço é \"%s\".", nome, endereco);
}
