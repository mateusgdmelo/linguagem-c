#include <stdio.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    int idade;
    float peso;

    printf("Qual � o seu nome? ");
    gets(nome);
    printf("Qual � a sua idade? ");
    scanf("%i", &idade);
    printf("Qual � o seu peso? (Kg) ");
    scanf("%f", &peso);

    printf("------<<<<<< Processando >>>>>>------\n");
    printf("Muito prazer, %s. Voc� tem %i anos de idade e pesa %.1fKg. Correto?\n", nome, idade, peso);
    printf("Fim\n");
}
