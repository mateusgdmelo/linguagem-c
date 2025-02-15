#include <stdio.h>
#include <locale.h>

void main() {
  setlocale(LC_ALL, "Portuguese");
  const int MAIOR_IDADE = 21;
  printf("%i", MAIOR_IDADE);
  
}
