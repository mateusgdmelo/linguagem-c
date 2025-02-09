#include <stdio.h>
#include <locale.h> // É preciso incluir a biblioteca locale.h para poder usar a função setlocale

void main() {
    setlocale(LC_ALL, "Portuguese"); // setlocale é usado para especificar a linguagem que usamos
    printf("C é \n\"SUPER\" \nfácil!");

}
