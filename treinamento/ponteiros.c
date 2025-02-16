/*
 * Neste modulo voce aprendera sobre:
 * 	1. Ponteiros
 * 	2. Curiosidades sobre ponteiros
 * 	3. Cuidados com ponteiros
*/

/*
 * Ponteiros
 * 	° Ponteiros são variáveis que armazenam endereços de memória
 * 		° Exemplo:
 * 			° int numero = 10;
 * 				° int *ponteiro = &numero;
 * 					° &numero: endereço de memória da variável numero
 * 					° *ponteiro: defini um ponteiro para a variável numero armazenando o endereço de memória de numero
 * 		° Ponteiros são utilizados para acessar variáveis por meio de seus endereços de memória
 * 			° Exemplo:
 * 				° printf("O valor de numero é: %d\n", numero);
 * 				° printf("O valor de numero é: %d\n", *ponteiro);
 * 		° Ponteiros são utilizados para manipular endereços de memória
 * 			° Exemplo:
 * 				° printf("O endereço de memória de numero é: %p\n", &numero);
 * 				° printf("O endereço de memória de numero é: %p\n", ponteiro);
 * 				° printf("O endereço de memória de ponteiro é: %p\n", &ponteiro);
 * 		° Ponteiros são utilizados para realizar operções com endereços de memória
 * 			° Exemplo:
 * 				° int *ponteiro = &numero;
 * 				° ponteiro = ponteiro + 1; // incrementa o endereço de memória de ponteiro em sizeof(int) (depende do tipo de dado ao qual o ponteiro aponta)
 * 				° ponteiro = ponteiro - 1; // decrementa o endereço de memória de ponteiro sizeof(int) (depende do tipo de dado ao qual o ponteiro aponta)
 * 				° ponteiro++; // incrementa o endereço de memória de ponteiro em sizeof(int) (depende do tipo de dado ao qual o ponteiro aponta)
 * 				° ponteiro--; // decrementa o endereço de memória de ponteiro em sizeof(int) (depende do tipo de dado ao qual o ponteiro aponta)
 * 		° Ponteiros são utilizados para acessar elementos de arrays por meio de seus endereços de memória
 * 			° Exemplo:
 * 				° int numeros[5] = {1, 2, 3, 4, 5};
 * 				° int *ponteiro = numeros; // Uma array é um ponteiro para o primeiro elemento do array por isso não é necessário utilizar o operador de endereço de memória &.
 * 					° printf("O valor do primeiro elemento do array numeros é: %d\n", numeros[0]);
 * 					° printf("O valor do primeiro elemento do array numeros é: %d\n", *ponteiro);
 * 					° printf("O valor do segundo elemento do array numeros é: %d\n", numeros[1]);
 * 					° printf("O valor do segundo elemento do array numeros é: %d\n", *(ponteiro + 1));
 * 					° printf("O valor do último elemento do array numeros é: %d\n", numeros[4]);
 * 					° printf("O valor do último elemento do array numeros é: %d\n", *(ponteiro + 4));
 * 		° Ponteiros são utilizados para acessar elementos de matrizes multidimensionais por meio de seus endereços de memória
 * 			° Exemplo:
 * 				° int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
 * 				° int *ponteiro = matriz[0]; // Uma matriz é um ponteiro para o primeiro elemento da matriz por isso não é necessário utilizar o operador de endereço de memória &. E o primeiro elemento da matriz é um array contendo os elementos da primeira linha da matriz.
 * 					° printf("A primeira linha da matriz é: %d, %d, %d\n", matriz[0][0], matriz[0][1], matriz[0][2]);
 * 					° printf("A primeira linha da matriz é: %d, %d, %d\n", *(ponteiro + 0), *(ponteiro + 1), *(ponteiro + 2));
 * 				° ponteiro = matriz[1];
 * 					° printf("A segunda linha da matriz é: %d, %d, %d\n", matriz[1][0], matriz[1][1], matriz[1][2]);
 * 					° printf("A segunda linha da matriz é: %d, %d, %d\n", *(ponteiro + 0), *(ponteiro + 1), *(ponteiro + 2);
 *
 */

/*
 * Ponteiros para funções
 * 	° Ponteiros para funções são utilizados para armazenar endereços de funções
 * 		° Exemplo:
 * 			° int soma(int a, int b) { return a + b; }
 * 				° int (*ponteiro)(int, int) = soma;
 * 					° (*ponteiro)(10, 20); // chama a função soma com os argumentos 10 e 20
 * 					° ponteiro(10, 20); // chama a função soma com os argumentos 10 e 20
 * 					° printf("O resultado da soma é: %d\n", (*ponteiro)(10, 20));
 * 					° printf("O resultado da soma é: %d\n", ponteiro(10, 20));
 * 						° O operador de indireção (*) é opcional ao chamar a função por meio do ponteiro
 * 						° O operador de indireção (*) é necessário ao acessar o valor de retorno da função por meio do ponteiro
 * 							° Exemplo:
 * 								° int resultado = (*ponteiro)(10, 20);
 * 								° int resultado = ponteiro(10, 20);
 * 	° Ponteiros para funções são utilizados para chamar funções dinamicamente
 * 	° Ponteiros para funções são utilizados para passar funções como argumentos para outras funções
 * 		° Exemplo:
 * 			° void imprimir(int (*funcao)(int, int), int a, int b) { printf("O resultado é: %d\n", funcao(a, b)); }
 * 				° imprimir(soma, 10, 20); // chama a função imprimir com a função soma e os argumentos 10 e 20
 * 					° O resultado é: 30
 * 						° A função imprimir chama a função soma com os argumentos 10 e 20 e imprime o resultado
 * 							° A função imprimir é genérica e pode ser usada com qualquer função que tenha a mesma assinatura
 * 								° Exemplo:
 * 									° int subtracao(int a, int b) { return a - b; }
 * 										° imprimir(subtracao, 20, 10); // chama a função imprimir com a função subtracao e os argumentos 20 e 10
 * 											° O resultado é: 10
 * 	° Ponteiros para funções são utilizados para retornar funções de outras funções
 * 		° Exemplo:
 * 			° int (*operacao(char op))(int, int) { return op == '+' ? soma : subtracao; }
 * 				° int (*funcao)(int, int) = operacao('+'); // retorna a função soma
 * 					° printf("O resultado da operação é: %d\n", funcao(10, 20)); // chama a função soma com os argumentos 10 e 20
 * 						° O resultado da operação é: 30
 * 							° A função operacao retorna a função soma se o operador for '+' e a função subtracao se o operador for '-'
 * 	° Ponteiros para funções são utilizados para criar funções de ordem superior
 * 		° Exemplo:
 * 			° int calcular(int a, int b, int (*funcao)(int, int)) { return funcao(a, b); }
 * 				° printf("O resultado da soma é: %d\n", calcular(10, 20, soma)); // chama a função calcular com os argumentos 10, 20 e a função soma
 * 					° O resultado da soma é: 30
 * 						° A função calcular chama a função soma com os argumentos 10 e 20 e retorna o resultado
 * 	° Ponteiros para funções são utilizados para implementar callbacks
 * 		° Exemplo:
 * 			° void callback(void (*funcao)(void)) { funcao(); }
 * 				° void mensagem(void) { printf("Olá, mundo!\n"); }
 * 					° callback(mensagem); // chama a função callback com a função mensagem
 * 						° Olá, mundo!
 * 							° A função callback chama a função mensagem que imprime a mensagem "Olá, mundo!"
 */



/*
 * Curiosidades sobre ponteiros:
 * 
 * 	° Ponteiros armazenam endereços de memória de variáveis.
 * 	° Ponteiros permitem manipular diretamente os valores armazenados em memória.
 * 	° Ponteiros possibilitam a aritmética de endereços, permitindo operações como incremento e decremento.
 * 	° Ponteiros são usados para acessar elementos de arrays por meio da indexação via deslocamento de memória.
 * 	° Ponteiros permitem navegar em matrizes multidimensionais ao tratar linhas como arrays de arrays.
 * 	° Ponteiros facilitam a manipulação de strings, pois strings em C são representadas como arrays de caracteres.
 * 	° Ponteiros são utilizados para acessar membros de `structs`, especialmente em programação dinâmica.
 * 	° Ponteiros possibilitam o uso de ponteiros para funções, permitindo chamadas dinâmicas de funções.
 * 	° Ponteiros duplos e triplos (`**`, `***`) são usados para criar matrizes dinâmicas e estruturas complexas.
 * 
 */


/*
 * Cuidados com ponteiros:
 *
 * 	° Sempre inicialize ponteiros antes de usá-los para evitar acessos indevidos.
 * 		° Exemplo: int *ponteiro = NULL;
 *
 * 	° Verifique se um ponteiro é válido (diferente de `NULL`) antes de desreferenciá-lo.
 * 		° Exemplo: if(ponteiro != NULL){printf("O valor de ponteiro é: %d\n", *ponteiro);}
 * 	° Libere memória alocada dinamicamente (`malloc`, `calloc`, `realloc`) com `free` para evitar vazamentos de memória.
 * 		° Exemplo: free(ponteiro);
 * 	° Evite acessos fora dos limites da memória para prevenir erros de segmentação (`segmentation fault`).
 * 		° Exemplo: int *ponteiro = malloc(5 * sizeof(int)); // Aloca memória para 5 inteiros
 * 	° Tenha cuidado ao modificar ponteiros para evitar corrupção de memória.
 * 		° Exemplo: int *ponteiro = malloc(sizeof(int)); // Aloca memória para um inteiro (4 bytes) 
 * 	° Evite ponteiros pendentes (dangling pointers) ao liberar memória sem redefinir o ponteiro para `NULL`.
 * 		° Exemplo: free(ponteiro); ponteiro = NULL;
 * 	° Use ponteiros com atenção para evitar erros lógicos e bugs difíceis de depurar.
 * 		° Exemplo: int *ponteiro = &numero; // ponteiro aponta para o endereço de memória de numero
 * 	° Utilize `const` quando um ponteiro não deve modificar os dados apontados, garantindo segurança no código.
 * 		° Exemplo: const int *ponteiro = &numero; // ponteiro não pode modificar o valor de numero
 * 	° Faça revisões cuidadosas e utilize ferramentas como `Valgrind` para detectar vazamentos de memória.
 */

#include <stdio.h>
#include <stdint.h>


char* ler_char(char mensagem[]) {
	char *ponteiro = mensagem;
	return ponteiro;
}


int main(char argc, char *argv[]) {
	int8_t numero = 10;
	int8_t *ponteiro = &numero;

	char* (*ponteiro_char)(char[]) = ler_char;

	printf("O caractere lido é: %c\n", *ponteiro_char("hello cruel world!"));
	printf("O caractere lido é: %c\n", *ponteiro_char("hello cruel world!")+1);
	printf("O caractere lido é: %p\n", *ponteiro_char("hello cruel world!"));
	printf("O caractere lido é: %p\n", *ponteiro_char("hello cruel world!")+1);
	printf("O caractere lido está em: %p\n", (*ponteiro_char)("hello cruel world!"));
	printf("O caractere lido está em: %p\n", ponteiro_char("hello cruel world!")+1);

	printf("O valor de numero é: %d\n", ponteiro); // imprime um valor incorreto devido ao tipo de dado do ponteiro
	printf("O endereço de memória de numero é: %p\n", ponteiro); // imprime o endereço de memória de numero
	printf("O valor de numero é: %d\n", *ponteiro); // imprime o valor de numero
	printf("O endereço de memória de ponteiro é: %p\n", &ponteiro); // imprime o endereço de memória de ponteiro

	int32_t numeros[5] = {1, 2, 3, 4, 5};
	int32_t *ponteiro_numeros = numeros;
	
	printf("O valor do primeiro elemento do array numeros é: %d\n", *ponteiro_numeros);
	printf("O valor do segundo elemento do array numeros é: %d\n", *(ponteiro_numeros + 1));
	printf("O valor do último elemento do array numeros é: %d\n", *(ponteiro_numeros + sizeof(numeros) / sizeof(numeros[0]) - 1));

	int64_t matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int64_t *ponteiro_matriz = matriz[0];
	
	printf("A primeira linha da matriz é: %ld, %ld, %ld\n", *(ponteiro_matriz + 0), *(ponteiro_matriz + 1), *(ponteiro_matriz + 2));
	ponteiro_matriz = matriz[1];
	printf("A segunda linha da matriz é: %ld, %ld, %ld\n", *(ponteiro_matriz + 0), *(ponteiro_matriz + 1), *(ponteiro_matriz + 2));

	ponteiro_matriz = matriz[(sizeof(matriz) / sizeof(matriz[0]) - 1)];
	printf("O valor do último elemento da matriz é: %ld\n", *(ponteiro_matriz + (sizeof(matriz[0]) / sizeof(matriz[0][0]) - 1)));

	return 0;
}

