typedef struct cardapio CARDAPIO;
struct cardapio{
	//Identificao do produto
	char iProduto[6];
	//Nome do produto
	char nProduto[50];
	//ingredientes do produto
	char igProduto[50];
	//valor do produto
	char vProduto[50];
	//char bebida;
	char bProduto[50];
	//char tipo do produto
	char tProduto[10];
};

//Cabecarios
void addPBebidas();
void addPPizzas();
void listaProdutos();
void listarPBebidas();
void listarPPizzas();

void addCardapio(){
	int opcao;
	cabecalhoCardapio();
	printf("1 | Adicionar bebidas\n");
	printf("2 | Adicionar pizzas\n");
	cabecalhoFIM();
	scanf("%d", &opcao);
	switch (opcao){
		case 1:
			addPBebidas();
			break;
		case 2:
			addPPizzas();
			break;
		default:
			printf("Opção Inválida!\n");
			getch();
			break;
	}
}

void addPBebidas(){
	CARDAPIO cdp;
	int tipo;
	FILE* cardapiob;
	cardapiob = fopen("configs/cardapioB.txt", "ab");
	if(cardapiob == NULL){
	printf("Erro na abertura do arquivo!\n");
	} else {
		cabecalhoCardapio();
		
		fflush(stdin);
		printf("Nome da bebida: ");
		gets(cdp.nProduto);
				
		fflush(stdin);
		printf("Nª de identificação da bebida: ");
		gets(cdp.iProduto);
				
		fflush(stdin);
		printf("Valor da bebida: R$ ");
		gets(cdp.vProduto);
		
		fwrite(&cdp, sizeof(CARDAPIO), 1, cardapiob);
	}
	fclose(cardapiob);
}

void addPPizzas(){
	CARDAPIO cdp;
	int tipo;
	FILE* cardapiop;
	cardapiop = fopen("configs/cardapioP.txt", "ab");
	if(cardapiop == NULL){
	printf("Erro na abertura do arquivo!\n");
	} else {
		cabecalhoCardapio();
		
		fflush(stdin);
		printf("Nome da pizza: ");
		gets(cdp.nProduto);
				
		fflush(stdin);
		printf("Nª de identificação da pizza: ");
		gets(cdp.iProduto);
		
		fflush(stdin);
		printf("ingrediente: ");
		gets(cdp.igProduto);
				
		fflush(stdin);
		printf("Valor da pizza: R$ ");
		gets(cdp.vProduto);
		
		fwrite(&cdp, sizeof(CARDAPIO), 1, cardapiop);
	}
	fclose(cardapiop);
}

void listaProdutos(){
	int opcao;
	cabecalhoCardapio();
	printf("1 | Lista de bebidas\n");
	printf("2 | Lista de pizzas\n");
	cabecalhoFIM();
	scanf("%d", &opcao);
	switch (opcao){
		case 1:
			listarPBebidas();
			break;
		case 2:
			listarPPizzas();
			break;
		default:
			printf("Opção Inválida!\n");
			getch();
			break;
	}
}

void listarPBebidas(){
	CARDAPIO cdp;
	FILE* cardapiob;
	
	cardapiob = fopen("configs/cardapioB.txt", "rb");
	
	system("cls");
	cabecalhoCardapio();
	if(cardapiob == NULL){
		printf("Erro na abertura do arquivo!\n");
	} else {
		while(fread(&cdp, sizeof(CARDAPIO), 1, cardapiob) == 1){
			printf("Nome da bebida: %s\n", cdp.nProduto);
			printf("Identificacao da bebida: %s\n", cdp.iProduto);
			printf("Valor do produto: %s\n", cdp.vProduto);
			cabecalhoFLISTAS();
		}
	}
	fclose(cardapiob);
	getch();
}

void listarPPizzas(){
	CARDAPIO cdp;
	FILE* cardapiop;
	
	cardapiop = fopen("configs/cardapioP.txt", "rb");
	
	system("cls");
	cabecalhoCardapio();
	if(cardapiop == NULL){
		printf("Erro na abertura do arquivo!\n");
	} else {
		while(fread(&cdp, sizeof(CARDAPIO), 1, cardapiop) == 1){
			printf("Nome da pizza: %s\n", cdp.nProduto);
			printf("Identificacao da pizza: %s\n", cdp.iProduto);
			printf("Ingredientes: %s\n", cdp.igProduto);
			printf("Valor da pizza: %s\n", cdp.vProduto);
			cabecalhoFLISTAS();
		}
	}
	fclose(cardapiop);
	getch();
}

