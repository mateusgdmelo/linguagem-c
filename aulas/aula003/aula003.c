#include <stdio.h>
#include <locale.h> // � preciso incluir a biblioteca locale.h para poder usar a fun��o setlocale

void main() {
    setlocale(LC_ALL, "Portuguese"); // setlocale � usado para especificar a linguagem que usamos
    printf("C � \n\"SUPER\" \nf�cil!");

}
