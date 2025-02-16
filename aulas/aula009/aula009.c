#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//Números Aleatórios
void main() {
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL));

  int n = rand() % 10 //gera números de 0 a 9

  //obs.: para gerar números de 1 a 10, use: % 10 + 1; de 1 a 50, use: % 50 + 1, e assim por diante.

  printf("Eu gerei o número %i.", n);
    
}
