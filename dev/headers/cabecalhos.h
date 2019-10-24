//struct system utilizado para amarzenar todas as configura��es do sistema
typedef struct system SYSTEM;
struct system {
	char nomeP[30];
	char infoP[20];
};

//Cabe�alho usado na 1� inicializa��o do sistema
void cabecalhoInicial(){
	printf("--------------------------------\n");
	printf("Configura��es do sistema	\n");
	printf("--------------------------------\n");
}
//Cabe�alho principal que � utilizado na tela menu iniciar 
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
//Cabe�alho usado para o final de uma switch
void cabecalhoFIM(){
	printf("--------------------------------\n");
	printf("Op��o desejada: ");
}
//Cabe�alho uasdo para o final de uma lista
void cabecalhoFLISTAS(){
	printf("--------------------------------\n");
}
//Cabe�alho usado para a parte de pedidos
void cabecalhoNvPedido(){
	system("cls");
	printf("--------------------------------\n");
	printf("Novo pedido	\n");
	printf("--------------------------------\n");
}
//Cabe�alho usado para a parte de configura��es
void cabecalhoConfiguracoes(){
	system("cls");
	printf("--------------------------------\n");
	printf("Configura��es	\n");
	printf("--------------------------------\n");
}
//Cabe�alho usado para a parte de cardapio
void cabecalhoCardapio(){
	system("cls");
	printf("--------------------------------\n");
	printf("Cardapio	\n");
	printf("--------------------------------\n");
}
