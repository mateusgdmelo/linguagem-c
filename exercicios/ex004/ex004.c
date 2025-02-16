#include <stdio.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "Portuguese");
    char nome1[20], nome2[20], nome3[20];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("Cadastrando a primeira pessoa: \n");
    printf("------------------------------\n");
    printf("NOME: ");
    gets(nome1); //lê o nome
    printf("SEXO [M/F]: ");
    sexo1 = getchar(); //lê o sexo
    printf("NOTA: ");
    scanf("%f", &nota1);
    fflush(stdin);

    printf("Cadastrando a segunda pessoa: \n");
    printf("------------------------------\n");
    printf("NOME: ");
    gets(nome2); //lê o nome
    printf("SEXO [M/F]: ");
    sexo2 = getchar(); //lê o sexo
    printf("NOTA: ");
    scanf("%f", &nota2);
    fflush(stdin);

    printf("Cadastrando a terceira pessoa: \n");
    printf("------------------------------\n");
    printf("NOME: ");
    gets(nome3); //lê o nome
    printf("SEXO [M/F]: ");
    sexo3 = getchar(); //lê o sexo
    printf("NOTA: ");
    scanf("%f", &nota3);
    fflush(stdin);

    //Resultados
    printf("\nLISTAGEM COMPLETA\n");
    printf("-------------------\n");
    printf("NOME\t\tSEXO\tNOTA\n");
    printf("%s\t\t%c\t%.1f\n", nome1, sexo1, nota1);
    printf("%s\t\t%c\t%.1f\n", nome2, sexo2, nota2);
    printf("%s\t\t%c\t%.1f\n", nome3, sexo3, nota3);
}
