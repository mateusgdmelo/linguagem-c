#include <stdio.h>
#include <locale.h>
//declarando const como uma diretiva de processamento
#define NOME "Mateus"
#define IDADE 28

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Meu nome � %s e minha idade � %i", NOME, IDADE);

}
