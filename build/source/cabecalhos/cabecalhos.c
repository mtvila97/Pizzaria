#include "cabecalhos.h"
#include "../system/info.h"

void cabecalhoInicial(){
	printf("--------------------------------\n");
	printf("Configurações do sistema		\n");
	printf("--------------------------------\n");
}

void cabecalhoPrincipal(){
	//Struct
	SYSTEM syt;
	
	//Abrir e ler info.dat
	FILE* fp;
	fp = fopen("database/info.dat", "rb");
	fread(&syt, sizeof(SYSTEM), 1, fp);
	
	printf("--------------------------------\n");
	printf("Pizzaria %s						\n", &syt.namePizzaria);
	printf("--------------------------------\n");
}

void cabecalhoFinal(){
	printf("--------------------------------\n");
	printf("Opção desejada: ");
}
