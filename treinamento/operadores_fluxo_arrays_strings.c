/*
 * Neste modulo voce aprendera sobre:
 * 	1. Operadores
 * 	2. Controle de fluxo
 * 	3. Arrays
 * 	4. Strings
 */

/*
 * Operadores
 * 	° Operadores são símbolos que realizam operações sobre variáveis e valores
 * 		° Exemplo:
 * 			° +: soma
 * 			° -: subtração
 * 			° *: multiplicação
 * 			° /: divisão
 * 			° %: módulo (resto da divisão)
 * 			° =: atribuição de valor
 * 			° ==: igualdade de valores (compara valores)
 * 			° !=: diferença de valores (compara valores)
 * 			° >: maior que (compara valores)
 * 			° <: menor que (compara valores)
 * 			° >=: maior ou igual a (compara valores)
 * 			° <=: menor ou igual a (compara valores)
 * 			° &&: e lógico (compara expressões lógicas)
 * 			° ||: ou lógico (compara expressões lógicas)
 * 			° !: negação lógica (inverte o valor de uma expressão lógica)
 * 			° &: operador bitwise E (compara bits)
 * 			° |: operador bitwise OU (compara bits)
 * 			° ^: operador bitwise XOR (compara bits)
 * 			° ~: operador bitwise NOT (inverte os bits)
 * 			° <<: operador bitwise de deslocamento à esquerda
 * 			° >>: operador bitwise de deslocamento à direita
 * 			° ?: operador ternário (condição ? valor_se_verdadeiro : valor_se_falso)
 * 			° ++: incremento
 * 			° --: decremento
 * 			° sizeof: retorna o tamanho de um tipo de dado
 * 			° &variavel: retorna o endereço de memória de uma variável (ponteiro)
 * 			° *ponteiro: retorna o valor de uma variável apontada por um ponteiro
 * 			° ->: operador de acesso a membros de uma estrutura através de um ponteiro
 * 			° ,: operador de vírgula (separador de expressões)
 * 			° (): operador de precedência (altera a ordem de execução de operações)
 * 			° []: operador de acesso a elementos de um array
 */

/*
 * Controle de fluxo
 * 	° Controle de fluxo é a capacidade de alterar a sequência de execução de um programa
 * 	° Estruturas de controle de fluxo:
 * 		° if: executa um bloco de código se uma condição for verdadeira
 * 		° else if: executa um bloco de código se a condição do if for falsa e a condição do else if for verdadeira
 * 		° else: executa um bloco de código se a condição do if for falsa e a condição do else if for falsa
 * 		° switch: executa um bloco de código de acordo com o valor de uma variável
 * 		° while: executa um bloco de código enquanto uma condição for verdadeira
 * 		° do while: executa um bloco de código pelo menos uma vez e enquanto uma condição for verdadeira
 * 		° for: executa um bloco de código um número específico de vezes
 * 		° break: interrompe a execução de um laço
 * 		° continue: interrompe a execução de uma iteração de um laço
 * 		° goto: transfere o controle de um programa para um rótulo específico (não recomendado)
 * 		° return: termina a execução de uma função e retorna um valor
 * 		° exit: termina a execução de um programa
 *
 * 		° if ternário: executa um bloco de código de acordo com uma condição (condição ? valor_se_verdadeiro : valor_se_falso)
 */	

/*
 * Arrays
 * 	° Arrays são coleções de variáveis do mesmo tipo
 * 	° Arrays são utilizados para armazenar múltiplos valores em uma única variável
 * 	° Arrays são indexados a partir de 0
 * 	° Arrays são definidos por meio de colchetes []
 * 	° Arrays são inicializados por meio de chaves {}
 * 	° Exemplo:
 * 		° int numeros[5] = {1, 2, 3, 4, 5};
 * 			° O array numeros tem 5 elementos
 * 				° numeros[0] = 1, numeros[1] = 2, numeros[2] = 3, numeros[3] = 4, numeros[4] = 5
 * 					° O tamanho do array é 5
 * 						° O índice do array vai de 0 a 4
 * 							° O índice 5 não existe
 * 							° O índice -1 não existe
 * 							° O índice 0 é o primeiro elemento do array
 * 							° O índice 4 é o último elemento do array
 * 							° O índice 5 é um erro de segmentação
 * 							° O índice -1 é um erro de segmentação
 * 	° Arrays multidimensionais são arrays de arrays
 * 	° Arrays multidimensionais são definidos por meio de colchetes []
 * 	° Arrays multidimensionais são inicializados por meio de chaves {}
 * 	° As linhas de um array multidimensional são separadas por vírgulas
 * 		° Exemplo:
 * 			° int matriz = {{a, b, c}, {d, e, f}};
 * 				° A matriz tem 2 linhas
 * 					° linha 0: a, b, c
 * 					° linha 1: d, e, f
 * 				° A matriz tem 3 colunas
 * 					° coluna 0: a, d
 * 					° coluna 1: b, e
 * 					° coluna 2: c, f
 * 				° O tamanho da matriz é 6
 * 				° Os índices da matriz são:
 * 					° matriz[0][0] = a, matriz[0][1] = b, matriz[0][2] = c
 * 					° matriz[1][0] = d, matriz[1][1] = e, matriz[1][2] = f
 * 	° Os indices de matrizes multidimensionais são acessados por meio do padrão array[linha][coluna]
 */
 
/*
 * Strings
 * 	° Strings são arrays de caracteres
 * 	° Strings são utilizadas para armazenar texto
 * 	° Strings são definidas por meio de aspas duplas "" ou aspas simples '' (para caracteres)
 * 		° Exemplo:
 * 			° char texto[] = "Olá, !";
 * 				° O array texto tem 6 elementos
 * 				° texto[0] = 'O', texto[1] = 'l', texto[2] = 'á', texto[3] = ',', texto[4] = ' ', texto[5] = '!'
 * 					° O tamanho do array é 6
 * 						° O índice do array vai de 0 a 5
 * 							° O índice 6 não existe
 * 								° O índice -1 não existe
 * 									° O índice 0 é o primeiro elemento do array
 * 										° O índice 5 é o último elemento do array
 * 											° O índice 6 é um erro de segmentação
 * 												° O índice -1 é um erro de segmentação
 * 	° Strings são terminadas por um caractere nulo '\0'
 * 		° O caractere nulo indica o fim de uma string
 * 			° Exemplo:
 * 				° char texto[] = "Olá!";
 * 					° O array texto tem 5 elementos
 * 						° texto[0] = 'O', texto[1] = 'l', texto[2] = 'á', texto[3] = '!', texto[4] = '\0'
 * 							° O tamanho do array é 5
 * 								° O índice do array vai de 0 a 4
 * 									° O índice 5 não existe
 * 										° O índice -1 não existe
 * 											° O índice 0 é o primeiro elemento do array
 * 	° Strings são manipuladas por meio de funções da biblioteca string.h
 * 		° Exemplo:
 * 			° strlen: retorna o tamanho de uma string
 * 				° Exemplo: strlen(texto)
 * 			° strcmp: compara duas strings
 * 				° Exemplo: strcmp(texto1, texto2)
 * 			° strcpy: copia uma string para outra
 * 				° Exemplo: strcpy(texto1, texto2)
 * 			° strcat: concatena duas strings
 * 				° Exemplo: strcat(texto1, texto2)
  			° strnlen: retorna o tamanho de uma string até um número específico de caracteres
 * 				° Exemplo: strnlen(texto, 5)
 * 			° strncat: concatena duas strings até um número específico de caracteres
 * 				° Exemplo: strncat(texto1, texto2, 5)
 * 			° strncmp: compara duas strings até um número específico de caracteres
 * 				° Exemplo: strncmp(texto1, texto2, 5)
 * 			° strncpy: copia uma string para outra até um número específico de caracteres
 * 				° Exemplo: strncpy(texto1, texto2, 5)
 */

#include <stdio.h>
#include <string.h>


int main(void) {
	
	// Operadores
	// Aritméticos
	int a = 10;
	int b = 20;
	int soma = a + b;
	int subtracao = a - b;
	int multiplicacao = a * b;
	int divisao = a / b;
	int modulo = a % b;

	// Relacionais
	int igual = a == b;
	int diferente = a != b;
	int maior = a > b;
	int menor = a < b;
	int maior_igual = a >= b;
	int menor_igual = a <= b;

	// Lógicos
	int e = (a > 0) && (b > 0);
	int ou = (a > 0) || (b > 0);
	int negacao = !(a > 0);
	
	// Bitwise
	int bitwise_e = a & b;
	int bitwise_ou = a | b;
	int bitwise_xor = a ^ b;
	int bitwise_not = ~a;
	int bitwise_esquerda = a << 2;
	int bitwise_direita = a >> 2;

	// Ternário
	int ternario = (a > b) ? a : b;

	// Incremento e decremento
	int incremento = a++;
	int decremento = b--;
	int pre_incremento = ++a;
	int pre_decremento = --b;

	// sizeof
	int tamanho_int = sizeof(int);

	// Endereço de memória
	int *endereco = &a;

	// Valor de um ponteiro
	// retorna o valor de a com base no endereço de memória
	int valor_ponteiro = *endereco;

	//Controle de fluxo
	// if, else if, else
	if(a > b){
		printf("A é maior que B\n");
	}else if(a < b){
		printf("A é menor que B\n");
	}else{
		printf("A é igual a B\n");
	}

	// switch case
	switch(a){
		case 10:
			printf("A é igual a 10\n");
			break;
		case 20:
			printf("A é igual a 20\n");
			break;
		default:
			printf("A não é igual a 10 nem a 20\n");
	}

	// while
	int i = 0;
	while(i < 10){
		printf("O valor de i é: %d\n", i);
		i++;
	}


	// do while
	do{
		printf("O valor de i é: %d\n", i);
		i++;
	}while(i < 10);


	// for
	for(i = 0; i < 10; i++){
		printf("O valor de i é: %d\n", i);
	}

	// break
	for(i = 0; i < 10; i++){
		if(i == 5){
			break;
		}
		printf("O valor de i é: %d\n", i);
	}

	// continue
	for(i = 0; i < 10; i++){
		if(i == 5){
			continue;
		}
		printf("O valor de i é: %d\n", i);
	}

	// goto
	// Evite o uso do goto
	goto rotulo;
	printf("Esta linha não será executada\n");
	rotulo:
		printf("Esta linha será executada\n");
	
	// Arrays
	int numeros[5] = {1, 2, 3, 4, 5};
	int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
	char texto[] = "Olá!";

	// Aceeso a elementos de um array
	int lenght = sizeof(numeros) / sizeof(numeros[0]);
	printf("O valor do primeiro elemento do array numeros é: %d\n", numeros[0]);
	printf("O valor do segundo elemento do array numeros é: %d\n", numeros[1]);
	printf("O valor do último elemento do array numeros é: %d\n", numeros[lenght - 1]);

	// Acesso a elementos de um array multidimensional
	printf("A primeira linha da matriz é: %d, %d, %d\n", matriz[0][0], matriz[0][1], matriz[0][2]);
	printf("A segunda linha da matriz é: %d, %d, %d\n", matriz[1][0], matriz[1][1], matriz[1][2]);
	printf("A primeira coluna da matriz é: %d, %d\n", matriz[0][0], matriz[1][0]);
	printf("A segunda coluna da matriz é: %d, %d\n", matriz[0][1], matriz[1][1]);
	printf("A terceira coluna da matriz é: %d, %d\n", matriz[0][2], matriz[1][2]);

	// Strings
	int tamanho = strlen(texto);
	int comparacao = strcmp(texto, "Olá!");
	char copia[5];
	strcpy(copia, texto);
	char concatenacao[10] = "Olá, ";
	strcat(concatenacao, "mundo!");
	char *primeira_ocorrencia = strchr(texto, 'á');
	char *ocorrencia = strstr(texto, "Olá");
	int tamanho_n = strnlen(texto, 3);
	char concatenacao_n[10] = "Olá, ";
	strncat(concatenacao_n, "mundo!", 3);
	int comparacao_n = strncmp(texto, "Olá!", 3);
	char copia_n[5];
	strncpy(copia_n, texto, 3);

	// Saída de dados
	printf("O valor de soma é: %d\n", soma);
	printf("O valor de subtração é: %d\n", subtracao);
	printf("O valor de multiplicação é: %d\n", multiplicacao);
	printf("O valor de divisão é: %d\n", divisao);
	printf("O valor de módulo é: %d\n", modulo);
	printf("O valor de igual é: %d\n", igual);
	printf("O valor de diferente é: %d\n", diferente);
	printf("O valor de maior é: %d\n", maior);
	printf("O valor de menor é: %d\n", menor);
	printf("O valor de maior_igual é: %d\n", maior_igual);
	printf("O valor de menor_igual é: %d\n", menor_igual);
	printf("O valor de e é: %d\n", e);
	printf("O valor de ou é: %d\n", ou);
	printf("O valor de negacao é: %d\n", negacao);
	printf("O valor de bitwise_e é: %d\n", bitwise_e);
	printf("O valor de bitwise_ou é: %d\n", bitwise_ou);
	printf("O valor de bitwise_xor é: %d\n", bitwise_xor);
	printf("O valor de bitwise_not é: %d\n", bitwise_not);
	printf("O valor de bitwise_esquerda é: %d\n", bitwise_esquerda);
	printf("O valor de bitwise_direita é: %d\n", bitwise_direita);
	printf("O valor de ternario é: %d\n", ternario);
	printf("O valor de incremento é: %d\n", incremento);
	printf("O valor de decremento é: %d\n", decremento);
	printf("O valor de pre_incremento é: %d\n", pre_incremento);
	printf("O valor de pre_decremento é: %d\n", pre_decremento);
	printf("O valor de tamanho_int é: %d\n", tamanho_int);
	printf("O valor de endereco é: %d\n", endereco);
	printf("O valor de valor_ponteiro é: %d\n", valor_ponteiro);
	printf("O valor de i é: %d\n", i);
	printf("O valor de tamanho é: %d\n", tamanho);
	printf("O valor de comparacao é: %d\n", comparacao);
	printf("O valor de copia é: %s\n", copia);
	printf("O valor de concatenacao é: %s\n", concatenacao);
	printf("O valor de primeira_ocorrencia é: %s\n", primeira_ocorrencia);
	printf("O valor de ocorrencia é: %s\n", ocorrencia);
	printf("O valor de tamanho_n é: %d\n", tamanho_n);
	printf("O valor de concatenacao_n é: %s\n", concatenacao_n);
	printf("O valor de comparacao_n é: %d\n", comparacao_n);
	printf("O valor de copia_n é: %s\n", copia_n);



	return 0;
}
