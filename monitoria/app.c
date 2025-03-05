// Nesta aula você aprenderá sobre Tipos de Dados em C e como declarar variáveis.
// você aprenderá sobre os tipos de dados básicos em C, como int, float, double, char, void, etc.
// Você aprenderá como declarar variáveis em C e como inicializá-las.

// Tipos de Dados em C
// Em C, os tipos de dados são divididos em dois grupos principais:
// Tipos de Dados Primitivos: Estes são os tipos de dados básicos que são suportados pela linguagem C. Por exemplo, int, char, float, double, etc.
// Tipos de Dados Derivados: Estes são os tipos de dados que são criados a partir dos tipos de dados primitivos. Por exemplo, arrays, ponteiros, estruturas, uniões, etc.

#include <stdio.h>
#include <stdint.h>

int main() {
	// Tipos de Dados Primitivos
	// tipos primitivos: int, float, double, char, void.
	// utilização de variáveis
	int a; // faixa de valores: -32768 a 32767 (4 bytes)
	float b; // faixa de valores: 3.4E-38 a 3.4E+38 (6 casas decimais) (4 bytes)
	double c; // faixa de valores: 1.7E-308 a 1.7E+308 (15 casas decimais) (8 bytes)
	char d; // faixa de valores: -128 a 127 (1 byte)
	unsigned int idade; // faixa de valores: 0 a 65535 (2 bytes)
	unsigned long int rg; // faixa de valores: 0 a 4294967295 (4 bytes)
	
	int8_t f; // faixa de valores: -128 a 127 (1 byte)
	

	size_t e; // faixa de valores: 0 a 65535 unsigned int
	
	//mostre a escala decimal
	//0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	//mostre a escala hexadecimal
	//0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
	//mostre a escala binária
	//0, 1
	//mostre a escala octal
	//0, 1, 2, 3, 4, 5, 6, 7

	// Inicialização de Variáveis
	a = 0x42; // 66
	b = 20.5;
	c = 30.5;
	d = 'A';
	a = a + d;
	
	printf("O valor de a é: %c \no valor decimal é: %d \ne o seu tamanho é: %zu \n", d, d, sizeof(d));
	printf("O valor de a é: %d \no valor decimal é: %d \ne o seu tamanho é: %zu \n", a, a, sizeof(a));
	return 0;
}
