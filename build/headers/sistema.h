//Void pedidos
void sPedidos();

//Void Estoque
void sEstoque();

//Void Config
void sConfig();
void createUser();

void pMenu(){
	int valor;	
	printf("Menu inicial			\n");
	printf("1 | Pedidos				\n");
	printf("2 | Estoque				\n");
	printf("3 | Configurações		\n");
	printf("Opção Desejada: ");
	scanf("%d", &valor);
	
	switch (valor){
		case 1 : 
			system("cls");
			sPedidos();
			break;
		
		case 2 : 
			system("cls");
			sEstoque();
			break;
		
		case 3:
			system("cls");
			sConfig();
			break;	
		}
	}

void sPedidos(){
	printf("Tela Pedidos");
}

void sEstoque(){
	printf("Tela Estoque");
}

void sConfig(){
	int s, i;
	printf("Tela Config				\n");
	printf("1 | Relatorios			\n");
	printf("2 | Backup				\n");
	printf("3 | Config Cardapio 	\n");
	printf("4 |	Config Sistema		\n");
	printf("5 | Voltar para o menu	\n");
	printf("Opcao desejada : ");
	scanf("%i", &i);
	switch (i) {
		case 1 :
			system("cls");
			printf("Relatorios");
			break;
			
		case 2 :
			system("cls");
			printf("Backup");
			break;
			
		case 3 :
			system("cls");
			printf("Config Cardapio");
			break;
			
		case 4 :
			system("cls");
				int i;
				printf("Tela Config Sistema				\n");
				printf("1 | Criar novo usuario			\n");
				printf("2 | Voltar para o menu			\n");
				printf("Opcao desejada : ");
				scanf("%i", &s);
				switch (s) {
					case 1 :
						system("cls");
						createUser();
						break;
						
					case 2 :
						system("cls");
						sConfig();
						break;
				
					default :
						printf("Opcao invalida");
						sConfig();
				}
			break;
			
		case 5 :
			system("cls");
			pMenu();
			break;
			
		default :
			printf("Opcao invalida");
			sConfig();
	}
	
}

void createUser(){
	//Definir variveis
	char userADM[9];
	char passADM[9];
	char pCONFIRM[9];
	
	//Salvar as informacoes
	FILE *config;
	config = fopen("configs/idUSERS.txt", "a+");
	printf("Cadastrar adminstrator do sistema \n");
	//User
	printf("Digite o login desejado: ");
	scanf("%s", &userADM);
	//Pass
	printf("A senha desejada: ");
	scanf("%s", &passADM);
	printf("Confirme a senha desejada: ");
	scanf("%s", &pCONFIRM);
	//Salvar config
	fprintf(config, "\n%s %s", &userADM, &passADM);
	fclose(config);
	//Verificar senha
	if(strcmp(passADM, pCONFIRM)==0){
		printf("Login salvo!");
		fprintf(config, "\n%s %s", &userADM, &passADM);
		fclose(config);
		system("cls");
		pMenu();
	} else {
		printf("As senhas não são iguais. Tente novamente !\n");
		createUser();
	} 
}
