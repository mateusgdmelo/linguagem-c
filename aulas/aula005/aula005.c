#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("O %s tem %i anos de idade\n", "Mateus", 28);
    printf("Seu peso atual é de %.2fKg\n", 89.9);
    printf("O seu sexo é %c", 'M');

}
