// Você aprenderá sobre entrada e saida de dos dados em C.
// Você aprenderá como ler dados do usuário em C usando a função scanf().
// Você aprenderá como exibir dados na tela em C usando a função printf().
// Você aprenderá sobre a formatação de strings em C.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int a;

	printf("O número digitado foi: %d\n", a);
	
	printf("Digite um número: ");
	scanf("%d", &a);

	printf("O número digitado foi: %d\n", a);

	return 0;
}
