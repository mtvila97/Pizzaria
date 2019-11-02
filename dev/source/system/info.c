#include "info.h"
#include "../login/login.h"
#include "../cabecalhos/cabecalhos.h"
#define SIZE 25

char dbSistema[]={"database/info.dat"}; 
 
void checkarConfig(){
	//Checkar existencia do info.dat
	FILE* fp;
	fp = fopen(dbSistema, "rb");
	if( fp == NULL){
		cabecalhoInicial();
		printf("O sistema ainda não foi configurado.\n");
		printf("Tecle 'ENTER' para configurar.");
		mkdir("database");
		getch();
		fclose(fp);
		registrarInf();
	} else {
		logar();
	}
}

void registrarInf(){
	// Abreviacao struct SYSTEM
	SYSTEM syt;

	//Ler e escrever arquivo info.dat
	FILE* fp;
	fp = fopen("database/info.dat", "ab");
	
	//Criar pasta database
	
	//Configurar informacoes basicas
	system("cls");
	cabecalhoInicial();
	
	fflush(stdin);
	printf("Digite o nome da pizzaria: ");
	gets(syt.namePizzaria);
	
	fflush(stdin);
	printf("Digite o telefone da pizzaria: ");
	gets(syt.telPizzaria);
	
	fflush(stdin);
	printf("Digite o ID da pizzaria: ");
	scanf("%d", &syt.idPizzaria);
	
	fwrite(&syt, sizeof(SYSTEM), 1, fp);
	fclose(fp);
	
	//Configurar o endereço do servidor
	printf("\nPressione a tecla 'ENTER' para configurar o endereço do servidor.");
	getch();
	
	system("cls");
	cabecalhoInicial();
	
	//Configurar pasta do servidor
	syt.endServidor = malloc(SIZE*sizeof(char));
	fflush(stdin);
	printf("Digite o endereço da pasta do servidor:  ");
	gets(syt.endServidor);
	mkdir(syt.endServidor);
	
	printf("\nPressione a tecla 'ENTER' para configurar o seu login e senha.");
	getch();
	
	//Iniciar Registro do usuario principal
	registerGEN();
}
