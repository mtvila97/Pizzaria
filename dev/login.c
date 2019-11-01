#include "login.h"

char dbUser[]={"database/users.dat"};

void registerGEN(){
	LOGIN lgn;
	char tempPASS[10];
	
	//Abrir e escrever no .dat
	FILE* fp;
	fp = fopen(dbUser, "ab");
	
	//Cadastrar Gerente
	system("CLS");
	
	fflush(stdin);
	printf("Digite o seu nome: ");
	gets(lgn.nameGEN);
	
	fflush(stdin);
	printf("Digite o seu ID: ");
	gets(lgn.idGEN);
	
	fflush(stdin);
	printf("Digite a sua senha: ");
	gets(lgn.passGEN);
	
	printf("Digite a sua senha novamente: ");
	gets(tempPASS);
	
	//Verificacao da senha
	if(strcmp(lgn.passGEN, tempPASS) == 0) {
		fwrite(&lgn, sizeof(LOGIN), 1, fp);
		fclose(fp);
		logar();
	} else {
		printf("As senhas n?o s?o iguais. \nTente Novamente \n");
		system("pause");
		registerGEN();
	} 
}

void logar(){
	//Chechar user e pass
	char checkUSER[10], checkPASS[10];
	
	//struct 
	LOGIN lgn;
	
	//Abrir .dat
	FILE* fp;
	fp = fopen(dbUser, "rb");
	
	//Inicio
	if(fp == NULL){
		printf("Erro na abertura do arquivo!\n");
	} else {
		system("cls");
		
		//User
		fflush(stdin);
		printf("Digite o seu login: ");
		scanf("%s", &checkUSER);
		
		//Senha
		fflush(stdin);
		printf("Digite sua senha: ");
		scanf("%s", &checkPASS);
		
		while( fread(&lgn, sizeof(LOGIN), 1, fp) ==1) {
			//Gerente
			if(strcmp(checkUSER, lgn.idGEN) == 0) {
				if(strcmp(checkPASS, lgn.passGEN) == 0) {
					printf("Logado como gerente");
				} else {
					printf("senha inv?lido! \n");
				}
			}
		}
	}
	fclose(fp);
	getch();
}
