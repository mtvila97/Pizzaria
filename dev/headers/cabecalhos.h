//struct system
typedef struct system SYSTEM;
struct system {
	char nomeP[30];
	char infoP[20];
};

void cabecalhoInicial(){
	printf("--------------------------------\n");
	printf("Configurações do sistema	\n");
	printf("--------------------------------\n");
}

void cabecalhoMenu(){
	SYSTEM stm;
	FILE* config;
	
	config = fopen("configs/config.txt" , "rb");
	while( fread(&stm, sizeof(SYSTEM), 1, config) ==1) {}
	system("cls");
	printf("----------------------------------\n");
	printf("Sistema pizzaria %s\n", stm.nomeP);
	printf("----------------------------------\n");
}

void cabecalhoFIM(){
	printf("--------------------------------\n");
	printf("Opção desejada: ");
}

void cabecalhoNvPedido(){
	system("cls");
	printf("--------------------------------\n");
	printf("Novo pedido	\n");
	printf("--------------------------------\n");
}

void cabecalhoConfiguracoes(){
	system("cls");
	printf("--------------------------------\n");
	printf("Configurações	\n");
	printf("--------------------------------\n");
}

void cabecalhoCardapio(){
	system("cls");
	printf("--------------------------------\n");
	printf("Cardapio	\n");
	printf("--------------------------------\n");
}

void cabecalhoFLISTAS(){
	printf("--------------------------------\n");
}
