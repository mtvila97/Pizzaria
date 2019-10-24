#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <dir.h>


//Cabecarios
#include "headers\cabecalhos.h"
#include "headers\login.h"
#include "headers\sistema.h"


//Cabecarios
void createConfig();
void checkConfig();
void logar();
void cadastrar();

int main(){
	//Linguagem PTBR
	setlocale(LC_ALL, "Portuguese");
	//Chama a funcao check para verificar a existencia do configs/config.txt
	checkConfig();
	//Logar
	logar();
	//menuPrincipal
}

void checkConfig(){
	int opcao;
	//Localiza o config.txt
	FILE *config;
	config = fopen("configs/config.txt", "r");
	//Verifica a existencia do config.txt
	if( config == NULL ){
		do{
			cabecalhoInicial();
			printf("O sistema não esta configurado. Deseja configurar ?\n");
			printf("Digite : 1 - SIM | 2 - NÃO\n");
			cabecalhoFIM();
			scanf("%d", &opcao);
			
			switch (opcao){
				case 1 :
					system("cls");
					//criar pasta config
					mkdir("configs");
					//cria o config.txt
					createConfig();
					break;
				case 2 :
					//fecha o sistema
					exit(0);
					break;
				default : 
					printf("Opção Inválida \n");
					getch();
					break;
			}
		} while ( opcao != 2);
	}
}


void createConfig(){
	SYSTEM stm;
	FILE* config;
	//cria o config.txt para amarzenar o nome, e numero da pizzaria
	config = fopen("configs/config.txt" , "ab");
	//Chama o cabecalho inicial do sistema
	cabecalhoInicial();
	if(config == NULL){
		printf("Erro na abertura do arquivo!\n");
	} else {
		//Define o nome da pizzaria
		fflush(stdin);
		printf("Digite o nome da pizzaria: ");
		gets(stm.nomeP);
		//Define o numero da franquia da pizzaria
		fflush(stdin);
		printf("Informe o numero da pizzaria: ");
		gets(stm.infoP);
		//salva as informacoes no config.txt
		fwrite(&stm, sizeof(SYSTEM), 1, config);
	}
	//Fecha e salva o config.txt
	fclose(config);
	//Limpa a tela
	system("cls");
	//Chama a funcao cadastro do login.h
	cadastrarUsuarios();
	
}

