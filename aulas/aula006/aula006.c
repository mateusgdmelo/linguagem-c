#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");

	unsigned int idade = 28;
	float peso = 85.9;
	char sexo = 'M';
	char nome[] = "Mateus";
	printf("%s e do sexo %c. Tem %i anos de idade e pesa %.2fKg", nome, sexo, idade, peso);
}

