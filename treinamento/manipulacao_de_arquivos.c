/*
 * Neste modulo voce aprendera sobre:
 * 	1. Tipos de Arquivos (binários e de texto)
 * 	2. Operações de Arquivos (leitura, escrita, abertura e fechamento)
 * 	3. Manipulação de Arquivos (criação, remoção, renomeação e cópia)
 */

/*
 * Tipos de Arquivos
 * 	° Arquivos binários
 * 		° Arquivos binários armazenam dados em formato binário
 * 			° Exemplo: imagens, vídeos, executáveis, etc.
 * 		° Arquivos binários são mais eficientes para armazenar dados complexos
 * 		° Arquivos binários são menos legíveis para humanos
 * 		° Arquivos binários são mais rápidos para leitura e escrita
 * 		° Arquivos binários são mais compactos que arquivos de texto
 * 		° Arquivos binários são mais seguros para armazenar dados sensíveis
 * 		° Arquivos binários são mais difíceis de editar manualmente
 * 		° Arquivos binários são mais propensos a corrupção de dados
 * 		° Arquivos binários são mais difíceis de versionar e comparar
 * 		° Arquivos binários são mais difíceis de transferir entre sistemas
 * 		° Arquivos binários são mais difíceis de processar em diferentes plataformas
 * 		° Arquivos binários são mais difíceis de depurar e testar
 * 		° Arquivos binários são mais difíceis de analisar e interpretar
 * 		° Arquivos binários são mais difíceis de indexar e pesquisar
 * 		° Arquivos binários são mais difíceis de compartilhar e colaborar
 * 		° Arquivos binários são mais difíceis de converter e migrar
 * 		° Arquivos binários são mais difíceis de proteger e recuperar
 * 		° Arquivos binários são mais difíceis de integrar e automatizar
 * 		° Arquivos binários são mais difíceis de manter e evoluir
 * 		° Arquivos binários são mais difíceis de auditar e monitorar
 * 		° Arquivos binários são mais difíceis de otimizar e escalar
 * 		° Arquivos binários são mais difíceis de personalizar e extender
 * 		° Arquivos binários são mais difíceis de padronizar e documentar
 * 		° Arquivos binários são mais difíceis de garantir e certificar
 * 	° Arquivos de texto
 * 		° Arquivos de texto armazenam dados em formato de texto
 * 			° Exemplo: documentos, planilhas, apresentações, etc.
 * 		° Podemos dizer que um arquivo de texto é um arquivo binário, mas com uma codificação específica e legível para humanosfacilitando a leitura e edição. Assim todas as operações realizadas facilmente em um arquivo de texto podem ser realizadas em um arquivo binário, mas com mais dificuldade. Por outro lado, um arquivo binário pode armazenar dados de forma mais compacta e eficiente e com maior segurança.
 */	

/*
 * Operações de Arquivos
 * 	° Leitura
 * 		° A leitura de arquivos é feita para obter dados armazenados em um arquivo
 * 			° Exemplo: ler um arquivo de texto para exibir seu conteúdo na tela
 * 				° FILE *arquivo = fopen("arquivo.txt", "r"); // abre o arquivo para leitura
 * 					° if(arquivo == NULL) { printf("Erro ao abrir o arquivo\n"); return 1; } // verifica se o arquivo foi aberto corretamente
 * 						° char linha[100]; // define um buffer para armazenar a linha lida do arquivo
 * 							° while(fgets(linha, sizeof(linha), arquivo) != NULL) { // lê uma linha do arquivo até o final do arquivo
 * 								° printf("%s", linha); // exibe a linha lida na tela
 * 									° }
 * 										° fclose(arquivo); // fecha o arquivo
 * 											° return 0;
 * 				° A função `fopen` é utilizada para abrir um arquivo para leitura
 * 				° A função `fgets` é utilizada para ler uma linha do arquivo
 * 				° A função `fclose` é utilizada para fechar o arquivo
 * 				° A função `fopen` retorna um ponteiro para o arquivo ou `NULL` em caso de erro
 * 				° A função `fgets` retorna um ponteiro para a linha lida ou `NULL` em caso de erro
 * 				° A função `fclose` retorna `0` em caso de sucesso
 * 	° Escrita
 * 		° A escrita de arquivos é feita para armazenar dados em um arquivo
 * 			° Exemplo: escrever em um arquivo de texto para armazenar informações
 * 				° FILE *arquivo = fopen("arquivo.txt", "w"); // abre o arquivo para escrita
 * 					° if(arquivo == NULL) { printf("Erro ao abrir o arquivo\n"); return 1; } // verifica se o arquivo foi aberto corretamente
 * 						° fprintf(arquivo, "Olá, mundo!\n"); // escreve uma linha no arquivo
 * 							° fclose(arquivo); // fecha o arquivo
 * 								° return 0;
 * 	° binary
 * 		° A abertura de arquivos em modo binário é feita para ler e escrever dados binários
 * 			° Exemplo: abrir um arquivo binário para leitura e escrita
 * 				° FILE *arquivo = fopen("arquivo.bin", "rb+"); // abre o arquivo binário para leitura e escrita
 * 					° if(arquivo == NULL) { printf("Erro ao abrir o arquivo\n"); return 1; } // verifica se o arquivo foi aberto corretamente
 * 						° char buffer[100]; // define um buffer para armazenar os dados lidos do arquivo
 * 							° fread(buffer, sizeof(char), sizeof(buffer), arquivo); // lê os dados do arquivo para o buffer
 * 								° fwrite(buffer, sizeof(char), sizeof(buffer), arquivo); // escreve os dados do buffer no arquivo
 * 									° fclose(arquivo); // fecha o arquivo
 * 										° return 0;
 * 						° A função `fread` é utilizada para ler dados de um arquivo binário
 * 						° A função `fwrite` é utilizada para escrever dados em um arquivo binário
 * 						° O modo `rb+` é utilizado para abrir um arquivo binário para leitura e escrita
 * 	° Append
 * 		° A abertura de arquivos em modo append é feita para adicionar dados ao final do arquivo
 */	

/*
 * Manipulação de Arquivos
 * 	° Criação
 * 		° A criação de arquivos é feita para criar um novo arquivo no sistema de arquivos
 * 			° Exemplo: criar um arquivo de texto para armazenar informações
 * 				° FILE *arquivo = fopen("arquivo.txt", "w"); // cria um novo arquivo para escrita
 * 	° Remoção
 * 		° A remoção de arquivos é feita para excluir um arquivo do sistema de arquivos
 * 			° Exemplo: remover um arquivo de texto do sistema de arquivos 
 * 				° if(remove("arquivo.txt") != 0) { printf("Erro ao remover o arquivo\n"); return 1; } // verifica se o arquivo foi removido corretamente
 * 					° return 0;
 * 						° A função `remove` é utilizada para excluir um arquivo do sistema de arquivos
 * 	° Renomeação
 * 		° A renomeação de arquivos é feita para alterar o nome de um arquivo no sistema de arquivos
 * 			° Exemplo: renomear um arquivo de texto no sistema de arquivos
 * 				° if(rename("arquivo.txt", "novo_arquivo.txt") != 0) { printf("Erro ao renomear o arquivo\n"); return 1; } // verifica se o arquivo foi renomeado corretamente
 * 					° return 0;
 * 	° Cópia
 * 		° A cópia de arquivos é feita para duplicar um arquivo no sistema de arquivos
 * 			° Exemplo: copiar um arquivo de texto no sistema de arquivos 
 * 				° FILE *arquivo_origem = fopen("arquivo.txt", "r"); // abre o arquivo de origem para leitura
 * 					° FILE *arquivo_destino = fopen("copia_arquivo.txt", "w"); // abre o arquivo de destino para Escrita
 * 						° if(arquivo_origem == NULL || arquivo_destino == NULL) { printf("Erro ao abrir os arquivos\n"); return 1; } // verifica se os arquivos foram abertos corretamente
 * 							° char linha[100]; // define um buffer para armazenar a linha lida do arquivo
 * 								° while(fgets(linha, sizeof(linha), arquivo_origem) != NULL) { // lê uma linha do arquivo de origem até o final do arquivo
 * 									° fprintf(arquivo_destino, "%s", linha); // escreve a linha lida no arquivo de destino
 * 										° }
 * 											° fclose(arquivo_origem); // fecha o arquivo de origem
 * 												° fclose(arquivo_destino); // fecha o arquivo de destino
 * 													° return 0;
 *
 */

#include <stdio.h>
#include <stdlib.h>


char* ler_char(char mensagem[]) {
	char *ponteiro = mensagem;
	return ponteiro;
}

int main( void ) {
	
	char mensagem[] = "hello cruel world!";

	char* (*ponteiro)(char[]) = ler_char;

	FILE *arquivo = fopen("arquivo.txt", "w"); // cria um novo arquivo para escrita
	FILE *copy = fopen("copy.txt", "w"); // cria um novo arquivo para escrita
	
	if(arquivo == NULL || copy == NULL) {
		printf("Erro ao abrir os arquivos\n"); 
		return 1; 
	} // verifica se os arquivos foram abertos corretamente
	

	for(int i = 0; i < sizeof(mensagem); i++) {
		fprintf(arquivo, "%p\n", ponteiro(mensagem)+i); // escreve a linha lida no arquivo de destino
	}


	fclose(arquivo); // fecha o arquivo de origem
	fopen("arquivo.txt", "r"); // abre o arquivo de origem para leitura


	char linha[sizeof(ponteiro(mensagem))]; // define um buffer para armazenar a linha lida do arquivo
	while(fgets(linha, sizeof(linha), arquivo) != NULL) { // lê uma linha do arquivo de origem até o final do arquivo
		fprintf(copy, "%s", linha); // escreve a linha lida no arquivo de destino
		printf("%s", linha);
	}

	fclose(arquivo); // fecha o arquivo de origem
	fclose(copy); // fecha o arquivo de destino
}



