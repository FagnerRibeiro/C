/*
 * Neste módulo você aprenderá sobre:
 *     1. Estrutura básica de uma função em C
 *     2. protótipo de função
 *     3. Escopo de variáveis
 *     4. retorno de valores
 *     5. passagem de parâmetros
 *     7. Funções recursivas
 */

/* menor programa em C: void main(){}
 *    ° Todo programa em C precisa de uma função main
 *    ° definição da função main pode ser feita com ou sem parametros;
 *    ° Alguns compiladores(anteriores ao padrão C99) aceitam que a função main não retorne nada void main(){}
 *    ° A definição mais comun é que a função main retorne um inteiro int main(){}
 *    ° Ou com parametros int main(int argc, char *argv[]){}
 */ 


/*
 * Definição de função em C
 * 	° Em C uma função pode ser declarada:
 * 		° Por meio de um protótipo de função
 * 			° Exemplo: int soma(int a, int b);
 * 		° Por meio da definição da função
 * 			° Exemplo: int soma(int a, int b){return a + b;}
 * 	° Uma função pode ou não retornar um valor
 * 		° Se uma função não retornar um valor, o tipo de dado retornado é void
 * 	° Uma função pode ou não receber parâmetros
 * 	° Uma função só poderá ser utilizada após sua declaração
 */	

/*
 * Protótipo de função
 * 	° Um protótipo de função é utilizado para informar ao compilador sobre a existência de uma função antes de sua chamada
 * 	° Um protótipo de função é composto por:
 * 		° Tipo de dado retornado pela função
 * 		° Nome da função
 * 		° Parâmetros da função
 */

/*
 * Escopo de variáveis
 * 	° Escopo de variáveis é o local onde a variável é visível para o programa e onde ela pode ser utilizada
 * 	° Temos dois tipos de escopo de variáveis:
 * 		° Escopo global: variável é visível para todo o programa
 * 			° Exemplo: int numero = 10; declarada fora de qualquer bloco de código ou dentro da função main
 * 		° Escopo local: variável é visível apenas dentro de um bloco de código
 * 			° Exemplo: int main(){int numero = 10;}
 * 	° Variáveis locais tem prioridade sobre variáveis globais
 * 		° Exemplo: int numero = 10; int main(){int numero = 20;}
 * 			° O valor de numero dentro da função main será 20
 */
#include <stdio.h>

int numero_global_a = 10;
int numero_global_b = 10;
int numero_global_c = 10;

int soma_ate_n(int n){
    if(n == 0){
	return 0;
    }
    printf("O valor de n é: %d\n", n);
    return n + soma_ate_n(n - 1);
}

double soma(int a, int b);
int mutiplicacao(double a, double b);

int subtracao(int a, int b){
    return a - b;
}


float divisao(float a, float b){
    return a / b;
}

int main(void){ 
 	int numero_global_a = 20; // variável local
	extern int numero_global_b; // variável global
	
	printf("O valor de numero_global_a é: %d\n", numero_global_a);
	printf("O valor de numero_global_b é: %d\n", numero_global_b);	
	printf("O valor de numero_global_c é: %d\n", numero_global_c);

	printf("O valor de numero_global_a é: %d\n", numero_global_a);
	printf("O valor de numero_global_b é: %d\n", numero_global_b);	
	printf("O valor de numero_global_c é: %d\n", numero_global_c);
	soma(10, 20);
	divisao(10, 20);
	mutiplicacao(1000000000000000000, 20.11);
	subtracao(10, 20);
	int soma_igaul_a = soma_ate_n(10);
	printf("O resultado da soma é: %d\n", soma_igaul_a);
	return 0; 
}


int mutiplicacao(double a, double b){
	printf("O resultado da multiplicação é: %d\n",(a * b));
	printf("O resultado da multiplicação é: %f\n",(a * b));
	printf("O resultado da multiplicação é: %lf\n",(a * b));
	printf("O resultado da multiplicação é: %Lf\n",(a * b));
    return a * b;
}

double soma(int a, int b){
    return a + b;
}


