/*
 * Neste modulo voce aprendera sobre:
 * 	1. malloc, calloc e realloc e free
 * 	2. gerenciamento de memória
 * 	3. erros comuns ao alocar memória
 */


/*
 * Alocação Dinâmica de Memória
 * 	° A alocação dinâmica de memória é utilizada para alocar memória em tempo de execução
 * 	° A alocação dinâmica de memória é realizada por meio das funções `malloc`, `calloc` e `realloc`
 * 	° A liberação de memória alocada dinamicamente é realizada pela função `free`
 * 	° A alocação dinâmica de memória é utilizada para criar estruturas de dados dinâmicas
 */

/*
 * Função malloc
 * 	° A função `malloc` é utilizada para alocar memória em tempo de execução
 * 		° Exemplo:
 * 			° int *ponteiro = (int *) malloc(5 * sizeof(int)); // aloca memória para 5 inteiros (20 bytes)
 * 				° if(ponteiro == NULL) { printf("Erro ao alocar memória\n"); return 1; } // verifica se a alocação foi bem sucedida
 * 					° for(int i = 0; i < 5; i++) { ponteiro[i] = i + 1; } // inicializa os valores dos inteiros
 * 						° for(int i = 0; i < 5; i++) { printf("O valor de ponteiro[%d] é: %d\n", i, ponteiro[i]); } // imprime os valores dos inteiros	
 * 							° free(ponteiro); // libera a memória alocada
 * 								° ponteiro = NULL; // redefine o ponteiro para NULL
 * 									° return 0;
 * 	° A função `malloc` retorna um ponteiro para a memória alocada ou `NULL` em caso de erro
 * 	° A função `malloc` aloca memória não inicializada (lixo de memória)
 * 	° A função `malloc` é utilizada para alocar memória para um bloco de bytes
 */

/*
 * Função calloc
 * 	° A função `calloc` é utilizada para alocar memória em tempo de execução e inicializar a memória alocada com zero
 * 		° Exemplo:
 * 			° int *ponteiro = (int *) calloc(5, sizeof(int)); // aloca memória para 5 inteiros (20 bytes) e inicializa com zero
 * 				° if(ponteiro == NULL) { printf("Erro ao alocar memória\n"); return 1; } // verifica se a alocação foi bem sucedida
 * 					° for(int i = 0; i < 5; i++) { printf("O valor de ponteiro[%d] é: %d\n", i, ponteiro[i]); } // imprime os valores dos inteiros
 * 						° free(ponteiro); // libera a memória alocada
 * 							° ponteiro = NULL; // redefine o ponteiro para NULL
 * 								° return 0;
 * 	° A função `calloc` retorna um ponteiro para a memória alocada ou `NULL` em caso de erro
 * 	° A função `calloc` aloca memória inicializada com zero 
 * 	° A função `calloc` é utilizada para alocar memória para um bloco de bytes e inicializar com zero
 */

/*
 * Função realloc
 * 	° A função `realloc` é utilizada para realocar memória alocada dinamicamente
 * 		° Exemplo:
 * 			° int *ponteiro = (int *) malloc(5 * sizeof(int)); // aloca memória para 5 inteiros (20 bytes)
 * 				° if(ponteiro == NULL) { printf("Erro ao alocar memória\n"); return 1; } // verifica se a alocação foi bem sucedida
 * 					° ponteiro = (int *) realloc(ponteiro, 10 * sizeof(int)); // realoca memória para 10 inteiros (40 bytes)
 * 						° if(ponteiro == NULL) { printf("Erro ao realocar memória\n"); return 1; } // verifica se a realocação foi bem sucedida
 * 							° for(int i = 0; i < 10; i++) { ponteiro[i] = i + 1; } // inicializa os valores dos inteiros
 * 								° for(int i = 0; i < 10; i++) { printf("O valor de ponteiro[%d] é: %d\n", i, ponteiro[i]); } // imprime os valores dos inteiros
 * 									° free(ponteiro); // libera a memória alocada
 * 										° ponteiro = NULL; // redefine o ponteiro para NULL
 * 											° return 0;
 * 	° A função `realloc` retorna um ponteiro para a memória realocada ou `NULL` em caso de erro
 * 		° Se o ponteiro passado para `realloc` for `NULL`, a função se comporta como `malloc`
 * 	° A função `realloc` preserva os dados da memória original e aloca uma nova região de memória
 * 		° Se a nova região de memória for maior, os dados são copiados para a nova região
 * 		° Se a nova região de memória for menor, os dados são truncados para caber na nova região
 * 	° A função `realloc` é utilizada para aumentar ou diminuir o tamanho da memória alocada
 */

/*
 * Função free
 * 	° A função `free` é utilizada para liberar memória alocada dinamicamente
 * 	° A função `free` libera a memória alocada por `malloc`, `calloc` e `realloc`
 * 	° A função `free` não altera o valor do ponteiro, apenas libera a memória alocada
 * 		° Exemplo:
 * 			° int *ponteiro = (int *) malloc(5 * sizeof(int)); // aloca memória para 5 inteiros (20 bytes)
 * 				° if(ponteiro == NULL) { printf("Erro ao alocar memória\n"); return 1; } // verifica se a alocação foi bem sucedida
 * 					° free(ponteiro); // libera a memória alocada
 * 						° ponteiro = NULL; // redefine o ponteiro para NULL
 * 							° return 0;
 * 	° A função `free` é utilizada para evitar vazamentos de memória
 * 		° Se a memória alocada não for liberada, ocorre um vazamento de memória (memory leak)
 * 	° A função `free` não libera a memória automaticamente, é necessário chamar `free` explicitamente
 */

/*
 * Gerenciamento de Memória
 * 	° O gerenciamento de memória é a prática de alocar e liberar memória de forma eficiente
 * 	° O gerenciamento de memória é importante para evitar vazamentos de memória e corrupção de memória
 * 	° Valgrind é uma ferramenta útil para detectar vazamentos de memória e erros de acesso à memória
 * 	° O gerenciamento de memória é essencial para garantir a estabilidade e segurança de um programa
 */

/*
 * Erros Comuns ao Alocar Memória
 * 	° Erro de alocação de memória
 * 		° A alocação de memória pode falhar se não houver memória disponível
 * 		° Sempre verifique se a alocação de memória foi bem sucedida
 * 		° Erros de alocação de memória podem causar falhas de segmentação (`segmentation fault`)
 * 	° Vazamento de memória
 * 		° O vazamento de memória ocorre quando a memória alocada não é liberada fazendo com que o programa consuma mais memória do que o necessário
 * 		° Sempre libere a memória alocada dinamicamente com `free` para evitar vazamentos de memória
 * 		° Vazamentos de memória podem causar lentidão e instabilidade no programa
 * 		° Use ferramentas como Valgrind para detectar vazamentos de memória
 * 		° Evite vazamentos de memória liberando a memória alocada dinamicamente no final do programa
 * 		° Sempre defina ponteiros para `NULL` após liberar a memória alocada dinamicamente
 * 	° Corrupção de memória
 * 		° A corrupção de memória ocorre quando um programa modifica a memória além dos limites alocados causando comportamento indefinido e falhas de segmentação (`segmentation fault`)
 * 		° Evite corrupção de memória acessando apenas a memória alocada e evitando acessos fora dos limites
 * 			° Use `malloc`, `calloc` e `realloc` para alocar memória dinamicamente
 * 				° Use `free` para liberar a memória alocada dinamicamente
 * 		° Use ferramentas como Valgrind para detectar erros de acesso à memória
 * 		° Evite corrupção de memória mantendo o controle sobre a alocação e liberação de memória
 * 			° Use ponteiros com cuidado e evite acessos indevidos à memória
 * 			° Sempre inicialize ponteiros antes de usá-los e verifique se são válidos antes de desreferenciá-los
 * 			° Evite ponteiros pendentes (dangling pointers) ao liberar memória alocada dinamicamente
 * 			° Sempre defina ponteiros para `NULL` após liberar a memória alocada dinamicamente
 * 			° Use `const` para ponteiros que não devem modificar os dados apontados
 * 	° Fragmentação de memória
 * 		° A fragmentação de memória ocorre quando a memória é alocada e liberada de forma desordenada causando a fragmentação do espaço de endereçamento
 * 			° A fragmentação de memória pode levar a falhas de alocação de memória e lentidão no programa
 * 			° Evite fragmentação de memória alocando e liberando memória de forma ordenada
 * 			° Agrupe alocações e liberações de memória para evitar fragmentação
 * 			° Use pools de memória para alocar e liberar blocos de memória de tamanho fixo
 * 				° Exemplo:
 * 					° int *pool = (int *) malloc(100 * sizeof(int)); // aloca um pool de 100 inteiros
 * 						° int *bloco1 = pool; // aloca um bloco de 10 inteiros
 * 							° int *bloco2 = pool + 10; // aloca um bloco de 20 inteiros
 * 								° int *bloco3 = pool + 30; // aloca um bloco de 30 inteiros
 * 									° free(pool); // libera o pool de memória
 * 										° pool = NULL; // redefine o ponteiro para NULL
 * 											° return 0;
 * 			° Use algoritmos de alocação de memória eficientes para evitar fragmentação
 * 			° Evite alocar e liberar memória repetidamente para evitar fragmentação
 * 			° Agrupe alocações e liberações de memória para otimizar o uso da memória
 * 			° Use ferramentas de análise de memória para detectar e corrigir problemas de fragmentação
 * 	° Erros de acesso à memória
 * 		° Erros de acesso à memória ocorrem quando um programa tenta acessar memória não alocada ou acessa memória além dos limites alocados
 * 			° Erros de acesso à memória podem causar falhas de segmentação (`segmentation fault`) e comportamento indefinido
 * 			° Evite erros de acesso à memória verificando se os ponteiros são válidos antes de desreferenciá-los
 * 			° Evite acessos fora dos limites da memória para prevenir erros de segmentação
 */


#include <stdio.h>
#include <stdlib.h>

int main(char argc, char *argv[]) {
	int *ponteiro = (int *) malloc(5 * sizeof(int)); // aloca memória para 5 inteiros (20 bytes)
	if(ponteiro == NULL) { printf("Erro ao alocar memória\n"); return 1; } // verifica se a alocação foi bem sucedida
	for(int i = 0; i < 5; i++) { ponteiro[i] = i + 1; } // inicializa os valores dos inteiros
	for(int i = 0; i < 5; i++) { printf("O valor de ponteiro[%d] é: %d\n", i, ponteiro[i]); } // imprime os valores dos inteiros
	free(ponteiro); // libera a memória alocada
	ponteiro = NULL; // redefine o ponteiro para NULL
}
