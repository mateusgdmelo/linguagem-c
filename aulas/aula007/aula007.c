#include <stdio.h>
#include <locale.h>

void main() {
  setlocale(LC_ALL, "Portuguese");

  const char NOME[] = "Mateus";
  const int IDADE = 28;
  printf("Meu nome é %s e a minha idade é %i.",  NOME, IDADE);
}
