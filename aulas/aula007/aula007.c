#include <stdio.h>
#include <locale.h>
//const dentro da fun��o principal
void main() {
  setlocale(LC_ALL, "Portuguese");

  const char NOME[] = "Mateus";
  const int IDADE = 28;
  printf("Meu nome � %s e a minha idade � %i.",  NOME, IDADE);
}
