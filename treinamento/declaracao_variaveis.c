/*
 * Neste módulo você aprenderá sobre:
 * 	1. Estrutura básica de um programa em C
 * 	2. tipos de dados primitivos em C
 * 	3. Declaração e inicialização de variáveis
 * 	4. modificadores de tipo de dados(singned, unsigned, long, short)
 * 	5. entrada e saída de dados(printf, scanf)
 * 	6. Comentários em C
*/

//#include <stdio.h>

/* 
 * Função principal do programa
 * 	° Todo programa em C precisa de uma função main
 * 	° definição da função main pode ser feita com ou sem parametros;
 * 	° Alguns compiladores(anteriores ao padrão C99) aceitam que a função main não retorne nada void main(){}
 * 	° A definição mais comun é que a função main retorne um inteiro int main(){}
 * 	° Ou com parametros int main(int argc, char *argv[]){}
 * 		° argc é o número de argumentos passados para o programa
 * 		° argv é um vetor de strings que contém os argumentos passados para o programa
 * 			° começando pelo nome do programa em si argv[0] e os argumentos em sequência argv[1], argv[2], etc.
*/

/*
 * Tipos de dados primitivos em C
 * 	° char: 1 byte
 * 	° int: 2 ou 4 bytes
 * 	° float: 4 bytes
 * 	° double: 8 bytes
 * 	° void: sem tamanho
*/

/*
 * Padronização de tipos de dados em C99 e posteriores
 *
 * Este tipo de dado são definido na biblioteca stdint.h ou inttypes.h
 * 
 * Tipos de dados de largura fixa
 * 	° int8_t: tipo de dado de 8 bits
 * 	° int16_t: tipo de dado de 16 bits
 * 	° int32_t: tipo de dado de 32 bits
 * 	° int64_t: tipo de dado de 64 bits
 *
 *
 * Tipos de dados de largura mínima
 * 	° int_least8_t: tipo de dado de 8 bits
 * 	° int_least16_t: tipo de dado de 16 bits
 * 	° int_least32_t: tipo de dado de 32 bits
 * 	° int_least64_t: tipo de dado de 64 bits
 *
 * Tipos de dados de largura rápida
 * 	° int_fast8_t: tipo de dado de 8 bits
 * 	° int_fast16_t: tipo de dado de 16 bits
 * 	° int_fast32_t: tipo de dado de 32 bits
 * 	° int_fast64_t: tipo de dado de 64 bits
 *
 * Tipos de dados de largura máxima
 * 	° intmax_t: tipo de dado de 64 bits
 * 	° intptr_t: tipo de dado de 64 bits
 *
 * O seguinte tipo de dado é definido na biblioteca stdbool.h
 * Tipos de dados booleanos
 * 	° bool: tipo de dado booleano (Macros true e false)
 * 	° _Bool: tipo de dado booleano (Macros true e false)
 * 		° Exemplo:
 * 			° bool verdadeiro = true;
 * 			° _Bool falso = false;
*/

/*
 * Declaração e inicialização de variáveis
 * 	° Declaração de variáveis é feita informando o tipo de dado e o nome da variável
 * 	° Inicialização de variáveis é feita informando o valor que a variável irá receber
 * 	° Exemplo:
 * 		° int numero;
 * 		° numero = 10;
 * 	° Declaração e inicialização de variáveis pode ser feita em uma única linha
 * 		° int numero = 10;
*/

/*
 * Modificadores de tipo de dados
 * 	° signed: indica que o tipo de dado pode ser positivo ou negativo
 * 	° unsigned: indica que o tipo de dado só pode ser positivo
 * 	° long: aumenta o tamanho do tipo de dado em 4 bytes
 * 	° short: diminui o tamanho do tipo de dado em 2 bytes
 * 	° Exemplo:
 * 		° unsigned int numero = 10;
 * 		° long int numero = 10;
 * 		° short int numero = 10;
*/


/*
 * Novos modificadores de tipo de dados
 * 	° long long: aumenta o tamanho do tipo de dado em 8 bytes
*/

/*
 * Entrada e saída de dados
 * 	° printf: função que imprime dados na tela
 * 	° scanf: função que lê dados do teclado
 * 	° Exemplo:
 * 		° printf("Digite um número: ");
 * 		° int numero;
 * 		° scanf("%d", &numero);
 * 		° printf("O número digitado foi: %d", numero);
 *
 * 			° &numero: indica que o dado a ser lido é um endereço de memória
 * 			° %d: indica que o dado a ser lido é um inteiro
 * 			° %f: indica que o dado a ser lido é um float
 * 			° %lf: indica que o dado a ser lido é um double
 * 			° %c: indica que o dado a ser lido é um char
 * 			° %s: indica que o dado a ser lido é uma string
 * 			° %p: indica que o dado a ser lido é um ponteiro
 * 			° %x: indica que o dado a ser lido é um hexadecimal
 * 			° %o: indica que o dado a ser lido é um octal
 * 			° %u: indica que o dado a ser lido é um unsigned
 * 			° %e: indica que o dado a ser lido é um exponencial
 * 			° %g: indica que o dado a ser lido é um float ou double
 * 			° %i: indica que o dado a ser lido é um inteiro
 * 			° %a: indica que o dado a ser lido é um hexadecimal com 0x
 * 			° %A: indica que o dado a ser lido é um hexadecimal com 0X
 * 			° %n: indica que o dado a ser lido é um número de caracteres lidos até o momento
 * 			° %zu: indica que o dado a ser lido é um tamanho de tipo de dado
 * 			° %Lf: indica que o dado a ser lido é um long double
 * 			° %hhd: indica que o dado a ser lido é um char
 * 			° %h: indica que o dado a ser lido é um short
 * 			° %l: indica que o dado a ser lido é um long
 * 			° %ll: indica que o dado a ser lido é um long long
 * 			° %j: indica que o dado a ser lido é um intmax_t
 * 			Macros para impimir tipos de dados: PRI_tipoDeDado_tamanho_t
 * 				° PRIu32: indica que o dado a ser lido é um uint32_t
 * 				° PRId64: indica que o dado a ser lido é um int64_t
 * 				° PRIo32: indica que o dado a ser lido é um uint32_t em octal
 * 				° PRIx64: indica que o dado a ser lido é um uint64_t em hexadecimal
 * 					° Exemplo:
 * 						° uint32_t numero = 10;
 * 							° printf("O número digitado foi: %" PRIu32, numero);
 * 			Macros para escanear tipos de dados: SCNx_tipoDeDado_tamanho_t
 * 				° SCNu32: indica que o dado a ser lido é um uint32_t
 * 				° SCNd64: indica que o dado a ser lido é um int64_t
 * 				° SCNo32: indica que o dado a ser lido é um uint32_t em octal
 * 				° SCNx64: indica que o dado a ser lido é um uint64_t em hexadecimal
 * 					° Exemplo:
 * 						° uint32_t numero;
 * 							° scanf("%" SCNu32, &numero);
*/

/* 
 * Comentários em C 
 */
  	// ° Comentários de linha: são feitos com duas barras.
	/* ° Comentários de bloco: são feitos com e */
	
	/* De acordo com algumas convenções de programação,
		° Comentários devem ser evitados em excesso, para isso o código deve ser claro e autoexplicativo
		° Comentários devem ser usados para explicar o que o código faz e não como ele faz
		° Comentários devem ser usados para explicar trechos de código complexos
		° Comentários devem ser usados para explicar o propósito de funções e variáveis
		° Nome de variáveis e funções devem ser autoexplicativos para evitar o uso de comentários
	*/

int main(char argc, char *argv[]){
	return 0;
}

