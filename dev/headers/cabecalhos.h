//struct system utilizado para amarzenar todas as configurações do sistema
typedef struct system SYSTEM;
struct system {
	char nomeP[30];
	char infoP[20];
};

//Cabeçalho usado na 1° inicialização do sistema
void cabecalhoInicial(){
	printf("--------------------------------\n");
	printf("Configurações do sistema	\n");
	printf("--------------------------------\n");
}
//Cabeçalho principal que é utilizado na tela menu iniciar 
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
//Cabeçalho usado para o final de uma switch
void cabecalhoFIM(){
	printf("--------------------------------\n");
	printf("Opção desejada: ");
}
//Cabeçalho uasdo para o final de uma lista
void cabecalhoFLISTAS(){
	printf("--------------------------------\n");
}
//Cabeçalho usado para a parte de pedidos
void cabecalhoNvPedido(){
	system("cls");
	printf("--------------------------------\n");
	printf("Novo pedido	\n");
	printf("--------------------------------\n");
}
//Cabeçalho usado para a parte de configurações
void cabecalhoConfiguracoes(){
	system("cls");
	printf("--------------------------------\n");
	printf("Configurações	\n");
	printf("--------------------------------\n");
}
//Cabeçalho usado para a parte de cardapio
void cabecalhoCardapio(){
	system("cls");
	printf("--------------------------------\n");
	printf("Cardapio	\n");
	printf("--------------------------------\n");
}
