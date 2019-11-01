#include "info.h"
#include "login.h"

char dbSistema[]={"database/info.dat"}; 
 
void checkarConfig(){
	//Checkar existencia do info.dat
	FILE* fp;
	fp = fopen(dbSistema, "r");
	if( fp == NULL){
		printf("O sistema ainda não foi configurado.\n");
		printf("Tecle 'ENTER' para configurar.\n");
		getch();
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
	fp = fopen(dbSistema, "ab");
	
	//Incio do codigo
	system("cls");
	
	fflush(stdin);
	printf("Nome da pizzaria: ");
	gets(syt.namePizzaria);
	
	fflush(stdin);
	printf("Telefone da Pizzaria: ");
	gets(syt.telPizzaria);
	
	
	fflush(stdin);
	printf("Identificao ID da Pizzaria: ");
	scanf("%d", &syt.idPizzaria);
	
	printf("Pressione a tecla 'ENTER' para configurar o Endere?o da pizzaria\n");
	getch();
	
	system("CLS");
	
	fflush(stdin);
	printf("Endere?o da Pizzaria: ");
	gets(syt.end.endereco);
	
	fflush(stdin);
	printf("CEP da Pizzaria: ");
	gets(syt.end.cep);
	
	fflush(stdin);
	printf("Bairro da Pizzaria: ");
	gets(syt.end.bairro);
	
	fflush(stdin);
	printf("Numero da Pizzaria: ");
	scanf("%d", &syt.end.numero);
	
	fflush(stdin);
	printf("UF da Pizzaria: ");
	gets(syt.end.uf);
	
	fflush(stdin);
	printf("Cidade da Pizzaria: ");
	gets(syt.end.cidade);
	
	//Salvar no arquivo
	fwrite(&syt, sizeof(SYSTEM), 1, fp);
	fclose(fp);
	printf("Pressione a tecla 'ENTER' para configurar o seu login e senha");
	getch();
	registerGEN();
}
