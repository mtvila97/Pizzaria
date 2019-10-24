typedef struct login LOGIN;
struct login{
	char usuario[10];
	char senha[10];
};

void logar(){
	//Define um usuario temporario para fazer a verificação do mesmo..
	char checkUSER[10], checkPASS[10];
	//Chama a struct login	
	LOGIN lgn;
	//Define o idUSERS como file
	FILE* idUSERS;
	//Cabeçalho 
	cabecalhoMenu();
	idUSERS = fopen("configs/idUSERS.txt", "rb");
	if(idUSERS == NULL){
		printf("Erro na abertura do arquivo!\n");
	} else {
		fflush(stdin);
		printf("Digite o seu login: ");
		scanf("%s", &checkUSER);
		
		printf("Digite sua senha: ");
		scanf("%s", &checkPASS);
		
		while( fread(&lgn, sizeof(LOGIN), 1, idUSERS) ==1) {
			if(strcmp(checkUSER, lgn.usuario) == 0) {
				if(strcmp(checkPASS, lgn.senha) == 0) {
					menuPrincipal();
				} else {
					printf("Login e senha inválido! \n");
					logar();
				}
			} else {
				printf("Login e senha inválido! \n");
				logar();
			}
		}
	}
	fclose(idUSERS);
	getch();
}

void cadastrarUsuarios(){
	FILE* idUSERS;
	LOGIN lgn;
	char checkPASS[10];
	idUSERS = fopen("configs/idUSERS.txt" , "ab");
	system("cls");
	cabecalhoInicial();
	if(idUSERS == NULL){
		printf("Erro na abertura do arquivo!\n");
	} else {
		do {
			fflush(stdin);
			printf("Digite o login desejado: ");
			gets(lgn.usuario);
			
			fflush(stdin);
			printf("Digite a senha desejada: ");
			gets(lgn.senha);
			
			fflush(stdin);
			printf("Digite novamente a sua senha: ");
			scanf("%s", &checkPASS);
			if(strcmp(checkPASS, lgn.senha) == 0 ){
				fwrite(&lgn, sizeof(LOGIN), 1, idUSERS);
				system("cls");
				//testes
				exit(0);
			} else {
				printf("Senha diferente! \n");
				break;
				cadastrarUsuarios();
			}
		} while(getch() == 's');
		fclose(idUSERS);
	}
}

