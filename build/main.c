#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <dir.h>


//Cabecarios
#include "headers\login.h"



void config();
void createConfig();


int main(){
	//Linguagem PTBR
	setlocale(LC_ALL, "Portuguese");
	//Inicio
	int i;
	config();
	loginADM();
}


void config(){
	int i;
	//Localiza o config.txt
	FILE *tconfig;
	tconfig = fopen("configs/idUSERS.txt", "r");
	fclose(tconfig);
	
	
	//Verifica a existencia do config.txt
	if(tconfig == NULL){
		printf("O sistema não esta configurado. Deseja configurar ?\n");
		printf("Digite : 1 - SIM | 2 - NÃO\n");
		printf("Opção desejada: ");
		scanf("%i" ,&i);
	switch (i) {
		case 1 : 
			system("cls");
			//criar pasta config
			mkdir("configs");
			cadastroADM();
		case 2 :
			exit(0);
			break;
		default :
			printf("Opção Inválida \n");
			config();
		}
	}
}

//Cria o config.txt (USado como bando de dados para o sistema de LOGIN)
void createConfig(){
	//Configura o arquivo tipo "W" para escrever
	FILE *createC;
	createC = fopen("configs/idUSERS.txt", "w");
	fclose(createC);
	cadastroADM();
}


