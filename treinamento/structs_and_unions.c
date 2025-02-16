/*
 * Neste modulo voce aprendera sobre:
 * 	1. Structs
 * 	2. Unions
 * 	3. Enumerações
 */

/*
 * Structs
 * 	° Structs são utilizadas para agrupar variáveis de tipos diferentes em uma única estrutura
 * 	° Structs são definidas com a palavra-chave `struct` seguida de um nome e um bloco de variáveis
 * 		° Exemplo:
 * 			° struct Ponto {
 * 				° int x;
 * 					° int y;
 * 						° };
 * 							° struct Ponto p = {10, 20};
 * 								° printf("O ponto p está em: (%d, %d)\n", p.x, p.y);
 * 	° Structs são utilizadas para criar tipos de dados personalizados
 * 	° Structs são utilizadas para representar objetos do mundo real
 * 	° Structs são utilizadas para facilitar a manipulação de dados
 * 	° Structs são utilizadas para passar múltiplos argumentos para funções
 * 	° Structs são utilizadas para retornar múltiplos valores de funções
 * 	° Structs são utilizadas para criar listas encadeadas
 * 	° Structs são utilizadas para criar árvores binárias
 * 	° Structs são utilizadas para criar grafos
 * 	° Structs são utilizadas para criar tabelas de dispersão
 * 	° Structs são utilizadas para criar pilhas
 * 	° Structs são utilizadas para criar filas
 * 	° Structs são utilizadas para criar deques
 * 	° Structs são utilizadas para criar conjuntos
 * 	° Structs são utilizadas para criar mapas
 * 	° Structs são utilizadas para criar matrizes
 * 	° Structs são utilizadas para criar registros
 */

/*
 * Exemplos de structs:
 * 	° Dados personalizados
 * 		° struct Endereco {
 * 			° char rua[50];
 * 				° char cidade[50];
 * 					° char estado[3];
 * 						° int cep;
 * 							° int8_t numero;
 * 								° };
 * 									° struct Endereco endereco = {"Rua das Flores", "São Paulo", "SP", 12345678, 100};
 * 										° printf("O endereço é: %s, %s, %s, %d, %d\n", endereco.rua, endereco.cidade, endereco.estado, endereco.cep, endereco.numero);
 * 	° Objetos do mundo real	
 * 		° struct Pessoa {
 * 			° char nome[50];
 * 				° char sobrenome[50];
 * 					° int idade;
 * 						° float altura;
 * 							° float peso;
 * 								° };
 * 									° struct Pessoa pessoa = {"João", "Silva", 30, 1.80, 80.5};
 * 										° printf("A pessoa é: %s %s, %d anos, %.2f m, %.2f kg\n", pessoa.nome, pessoa.sobrenome, pessoa.idade, pessoa.altura, pessoa.peso);
 *	°Manipulação de Dados
 *		° struct Data {
 *			° int dia;
 *				° int mes;
 *					° int ano;
 *						° };
 *						° struct Data data = {10, 12, 2020};
 *						° printf("A data é: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);
 *						° data.dia = 20;
 *						° data.mes = 6;
 *						° data.ano = 2021;
 *						° printf("A data é: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);
 *	° Passagem de Argumentos
 *		° struct Retangulo {
 *			° float largura;
 *				° float altura;
 *					° };
 *					° float calcular_area(struct Retangulo retangulo) { return retangulo.largura * retangulo.altura; }
 *					° struct Retangulo retangulo = {10.5, 20.5};
 *					° printf("A área do retângulo é: %.2f\n", calcular_area(retangulo));
 *					° retangulo.largura = 15.5;
 *					° retangulo.altura = 25.5;
 *					° printf("A área do retângulo é: %.2f\n", calcular_area(retangulo));
 *	° Retorno de Valores
 *		° struct Ponto {
 *			° int x;
 *				° int y;
 *				° };
 *				° struct Ponto mover(struct Ponto ponto, int dx, int dy) { ponto.x += dx; ponto.y += dy; return ponto; }
 *				° struct Ponto ponto = {10, 20};
 *				° ponto = mover(ponto, 5, 10);	
 *				° printf("O ponto movido é: (%d, %d)\n", ponto.x, ponto.y);
 *				° ponto = mover(ponto, -5, -10);
 *				° printf("O ponto movido é: (%d, %d)\n", ponto.x, ponto.y);
 *
 *    ° Listas Encadeadas
 *    	° struct No {
 *    		° int valor;
 *    			° struct No *proximo;
 *    				° };
 *    ° Árvores Binárias
 *    	° struct No {
 *    		° int valor;
 *    			° struct No *esquerda;
 *    				° struct No *direita;
 *    					° };
*/

/*
 * Unions
 * 	° Unions são utilizadas para agrupar variáveis de tipos diferentes em uma única estrutura
 * 		° Exemplo:
 * 			° union Numero {
 * 				° int inteiro;
 * 					° float flutuante;
 * 						° };
 * 							° union Numero numero;
 * 								° numero.inteiro = 10;
 * 									° printf("O número inteiro é: %d\n", numero.inteiro);
 * 										° numero.flutuante = 10.5;
 * 											° printf("O número flutuante é: %.2f\n", numero.flutuante);
 *     ° Unions são utilizadas para economizar memória
 *     ° Unions são utilizadas para representar diferentes tipos de dados
 *     ° Unions são utilizadas para acessar o mesmo espaço de memória com diferentes tipos
 *     ° Unions são utilizadas para criar tipos de dados genérico
 */

/*
 *Enumerações
 *	° Enumerações são utilizadas para criar tipos de dados personalizados
 *	° Exemplo:
 *	° enum DiaDaSemana {
 *	° DOMINGO,
 *	° SEGUNDA,
 *	° TERCA,
 *	° QUARTA,
 *	° QUINTA,
 *	° SEXTA,
 *	° SABADO
 *	° };
 *	° enum DiaDaSemana dia = SEGUNDA;
 *	° printf("O dia da semana é: %d\n", dia);
 */

#include <stdio.h>
#include <stdint.h>

struct Ponto {
	int x;
	int y;
};

struct Endereco {
	char rua[50];
	char cidade[50];
	char estado[3];
	int cep;
	int8_t numero;
};


struct Pessoa {
	char nome[50];
	char sobrenome[50];
	int idade;
	float altura;
	float peso;
};


struct Data {
	int dia;
	int mes;
	int ano;
};


struct Retangulo {
	float largura;
	float altura;
};


struct Ponto mover(struct Ponto ponto, int dx, int dy) {
	ponto.x += dx;
	ponto.y += dy;
	return ponto;
}


union Numero {
	int inteiro;
	float flutuante;
};


enum DiaDaSemana {
	DOMINGO,
	SEGUNDA,
	TERCA,
	QUARTA,
	QUINTA,
	SEXTA,
	SABADO
};


int main(char argc, char *argv[]) {
	struct Ponto p = {10, 20};
	printf("O ponto p está em: (%d, %d)\n", p.x, p.y);

	struct Endereco endereco = {"Rua das Flores", "São Paulo", "SP", 12345678, 100};
	printf("O endereço é: %s, %s, %s, %d, %d\n", endereco.rua, endereco.cidade, endereco.estado, endereco.cep, endereco.numero);

	struct Pessoa pessoa = {"João", "Silva", 30, 1.80, 80.5};
	printf("A pessoa é: %s %s, %d anos, %.2f m, %.2f kg\n", pessoa.nome, pessoa.sobrenome, pessoa.idade, pessoa.altura, pessoa.peso);

	struct Data data = {10, 12, 2020};
	printf("A data é: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);
	data.dia = 20;
	data.mes = 6;
	data.ano = 2021;
	printf("A data é: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);

	struct Retangulo retangulo = {10.5, 20.5};
	printf("A área do retângulo é: %.2f\n", retangulo.largura * retangulo.altura);
	retangulo.largura = 15.5;
	retangulo.altura = 25.5;
	printf("A área do retângulo é: %.2f\n", retangulo.largura * retangulo.altura);

	struct Ponto ponto = {10, 20};
	ponto = mover(ponto, 5, 10);
	printf("O ponto movido é: (%d, %d)\n", ponto.x, ponto.y);
	ponto = mover(ponto, -5, -10);
	printf("O ponto movido é: (%d, %d)\n", ponto.x, ponto.y);

	union Numero numero;
	numero.inteiro = 10;
	printf("O número inteiro é: %d\n", numero.inteiro);
	numero.flutuante = 10.5;
	printf("O número flutuante é: %.2f\n", numero.flutuante);
}

